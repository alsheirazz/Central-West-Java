#include <a_samp>
#include <dc>
#include <streamer>
#include <colandreas>

#define admsys_isnull(%0) ((!(%0[0])) || (((%0[0]) == '\1') && (!(%0[1]))))

new DCC_Channel:g_Discord_Chat;
new exitstage = 0;
new exittimer = -1;

stock Float:frandom(Float:max, Float:m2 = 0.0, dp = 3)
{
    new Float:mn = m2;
    if(m2 > max) {
        mn = max,
        max = m2;
    }
    m2 = floatpower(10.0, dp);
    
    return floatadd(floatdiv(float(random(floatround(floatmul(floatsub(max, mn), m2)))), m2), mn);
}

public OnFilterScriptInit()
{
	g_Discord_Chat = DCC_FindChannelById("729238185762095175"); 
    return 1;
}

forward FadeBlood(objectid, alpha);
public FadeBlood(objectid, alpha)
{
    alpha -= 5;
    
    if(alpha) {
        SetDynamicObjectMaterial(objectid, 0, -1, "none", "none", 0xFF0000 | (alpha << 24));
        SetTimerEx("FadeBlood", 50, false, "ii", objectid, alpha);
    }
    else {
        DestroyDynamicObject(objectid);
    }
}

forward kicktimer(playerid);
public kicktimer(playerid)
{
    Kick(playerid);
    return 1;
}

forward RestartTimer();

public RestartTimer()
{
    if (exitstage != 0) {
        if (exitstage == 1) {
            exitstage = 2;

            new pcount = 0;
            for (new i = 0; i < MAX_PLAYERS; i++) {
                if (!IsPlayerConnected(i)) continue;
                Kick(i);
                pcount ++;
            }

            KillTimer(exittimer);

            exittimer = SetTimer("RestartTimer", pcount * 100, 0);
        }
        else {// if (exitstage == 2) {
//          exitstage = 0;

            SendRconCommand("exit");

//          KillTimer(exittimer);
//          exittimer = -1;
        }
    }
}

forward DCC_OnMessageCreate(DCC_Message:message);

public DCC_OnMessageCreate(DCC_Message:message)
{
	new realMsg[100];
    DCC_GetMessageContent(message, realMsg, 100);
    new bool:IsBot;
    new DCC_Channel:channel;
 	DCC_GetMessageChannel(message, channel);
    new DCC_User:author;
	DCC_GetMessageAuthor(message, author);
    DCC_IsUserBot(author, IsBot);
    if(channel == g_Discord_Chat && !IsBot)
    {
        new user_name[32 + 1], str[152];
       	DCC_GetUserName(author, user_name, 32);
        format(str,sizeof(str), "{8a6cd1}[DISCORD] {aa1bb5}%s: {ffffff}%s",user_name, realMsg);
        SendClientMessageToAll(-1, str);
    }

    return 1;
}

public OnPlayerText(playerid, text[])
{

    new name[MAX_PLAYER_NAME + 1];
    GetPlayerName(playerid, name, sizeof name);
    if(strfind("@everyone", text, true)!= -1 || strfind("@here", text, true)!= -1)
    {return 0;}
    else{
    new msg[128];
    format(msg, sizeof(msg), "**%s:** %s", name, text);
    DCC_SendChannelMessage(g_Discord_Chat, msg);}
    return 1;
}

public OnPlayerConnect(playerid)
{
   	new name[MAX_PLAYER_NAME + 1];
    GetPlayerName(playerid, name, sizeof name);
    if(strfind("@everyone", name, true)!= -1 || strfind("@here", name, true)!= -1)
    {Kick(playerid);}
    else {
    if (_:g_Discord_Chat == 0)
    g_Discord_Chat = DCC_FindChannelById("729238185762095175");

    new string[128];
    format(string, sizeof string, " ```diff\n+ %s Joined The Server. :)\n```", name);
    DCC_SendChannelMessage(g_Discord_Chat, string);
    }
    return 1;
}

public OnPlayerDisconnect(playerid, reason)
{
    new name[MAX_PLAYER_NAME + 1];
    GetPlayerName(playerid, name, sizeof name);

    new szDisconnectReason[3][] =
    {
        "Timeout/Crash",
        "Quit",
        "Kick/Ban"
    };
    
    if (_:g_Discord_Chat == 0)
    g_Discord_Chat = DCC_FindChannelById("729238185762095175");

    new string[128];
    format(string, sizeof string, " ```diff\n- %s Has Left The Server (%s) :(\n```", name, szDisconnectReason[reason]);
    DCC_SendChannelMessage(g_Discord_Chat, string);
    return 1;
}

public OnPlayerDeath(playerid, killerid, reason)
{
    new name[MAX_PLAYER_NAME + 1], name2[MAX_PLAYER_NAME];
    GetPlayerName(playerid, name, sizeof name);
    GetPlayerName(killerid, name2, sizeof name2);
    new msg[128], reasonMsg[128];
    if (killerid != INVALID_PLAYER_ID)
    {
        switch (reason)
        {
            case 0: reasonMsg = "Unarmed";
            case 1: reasonMsg = "Brass Knuckles";
            case 2: reasonMsg = "Golf Club";
            case 3: reasonMsg = "Night Stick";
            case 4: reasonMsg = "Knife";
            case 5: reasonMsg = "Baseball Bat";
            case 6: reasonMsg = "Shovel";
            case 7: reasonMsg = "Pool Cue";
            case 8: reasonMsg = "Katana";
            case 9: reasonMsg = "Chainsaw";
            case 10: reasonMsg = "Dildo";
            case 11: reasonMsg = "Dildo";
            case 12: reasonMsg = "Vibrator";
            case 13: reasonMsg = "Vibrator";
            case 14: reasonMsg = "Flowers";
            case 15: reasonMsg = "Cane";
            case 22: reasonMsg = "Pistol";
            case 23: reasonMsg = "Silenced Pistol";
            case 24: reasonMsg = "Desert Eagle";
            case 25: reasonMsg = "Shotgun";
            case 26: reasonMsg = "Sawn-off Shotgun";
            case 27: reasonMsg = "Combat Shotgun";
            case 28: reasonMsg = "MAC-10";
            case 29: reasonMsg = "MP5";
            case 30: reasonMsg = "AK-47";
            case 31: reasonMsg = "M4";
            case 32: reasonMsg = "TEC-9";
            case 33: reasonMsg = "Country Rifle";
            case 34: reasonMsg = "Sniper Rifle";
            case 37: reasonMsg = "Fire";
            case 38: reasonMsg = "Minigun";
            case 41: reasonMsg = "Spray Can";
            case 42: reasonMsg = "Fire Extinguisher";
            case 49: reasonMsg = "Vehicle Collision";
            case 50: reasonMsg = "Vehicle Collision";
            case 51: reasonMsg = "Explosion";
            default: reasonMsg = "Unknown";
        }
        format(msg, sizeof(msg), "```diff\n- %s killed %s. (%s)\n```", name2, name, reasonMsg);
    }
    else
    {
        switch (reason)
        {
            case 53: format(msg, sizeof(msg), "```diff\n- %s died. (Drowned)\n```", name);
            case 54: format(msg, sizeof(msg), "```diff\n- %s died. (Collision)\n```", name);
            default: format(msg, sizeof(msg), "```diff\n- %s died.\n```", name);
        }
    }
    //format(msg, sizeof(msg), "```diff\n- %s has been killed by %s[%i]\n```", name, name2, reason);
    DCC_SendChannelMessage(g_Discord_Chat, msg);
	return 1;
}

public OnPlayerWeaponShot(playerid, weaponid, hittype, hitid, Float:fX, Float:fY, Float:fZ) {
    if(hittype == BULLET_HIT_TYPE_PLAYER) {
        new Float:rDist = frandom(-5.0, 6.0);
        if(rDist > 0.0) {
            new Float:vX, Float:vY, Float:vZ,
                Float:pX, Float:pY, Float:pZ;
            GetPlayerLastShotVectors(playerid, vX, vY, vZ, fX, fY, fZ);
            
            vX = fX - vX; 
            vY = fY - vY; 
            vZ = fZ - vZ; 

            new Float:d = VectorSize(vX, vY, vZ);
            vX /= d;
            vY /= d;
            vZ /= d;
            
            vX *= rDist;
            vY *= rDist;
            vZ *= rDist;
            
            vX += fX + frandom(-0.5, 0.5);
            vY += fY + frandom(-0.5, 0.5);
            vZ += fZ + frandom(-0.5, 0.5);
            
            if(CA_RayCastLineNormal(fX, fY, fZ, vX, vY, vZ, pX, pY, pZ, pX, pY, pZ)) {
                rDist = frandom(0.005, 0.020, 4);
                pX *= rDist;
                pY *= rDist;
                pZ *= rDist;
                
                CA_RayCastLineAngle(fX, fY, fZ, vX, vY, vZ, fX, fY, fZ, vX, vY, vZ);
                
                new objectid = CreateDynamicObject(19836, fX + pX, fY + pY, fZ + pZ, vX, vY, vZ);
                if(IsValidDynamicObject(objectid)) {
                    SetDynamicObjectMaterial(objectid, 0, -1, "none", "none", 0xFFFF0000);
                    
                    SetTimerEx("FadeBlood", 1500, false, "ii", objectid, 255);
                }
            }
        }
    }

    return 1;
}

DCCMD:kick(DCC_User:user, const args)
{
    new id, giveplayer[MAX_PLAYER_NAME], string[64];
    if(sscanf(args,"u[24]",id)) return SendDC(DISCORD_CHANNEL_ID, "```Usage: /kick [playerid]```");
    else if(!IsPlayerConnected(id))  return SendDC(DISCORD_CHANNEL_ID, "**Player is not connected.**");
    GetPlayerName(id, giveplayer, MAX_PLAYER_NAME);
    SendDC(DISCORD_CHANNEL_ID, "```Player %s has been kicked.```", giveplayer);
    format(string, sizeof(string), "%s has been kicked from the server.", giveplayer);
    SendClientMessageToAll(COLOR_RED, string);
    SetTimerEx("kicktimer", 500, false, "i", id);
    return 1;
}

DCCMD:exit2(DCC:user, const args)
{
    new tmp[100], playername[200], string[200];
    if (exitstage != 0)
        return SendDC(DISCORD_CHANNEL_ID, "```Error: The server is already restarting.```");
    strmid(tmp, args, 6, strlen(args));
    if (strlen(tmp) != 0) {
        format(string, sizeof(string), "```The server has been restarted. Reason: %s```", tmp);
        SendDC(DISCORD_CHANNEL_ID, string);
    }
    else {
        SendDC(DISCORD_CHANNEL_ID, "```The server has been restarted.```");
    }
    DCC_GetUserName(user, playername, MAX_PLAYER_NAME);
    printf("[exit] %s has restarted the server.", playername);
    exitstage = 1;
    exittimer = SetTimer("RestartTimer", 10, 0);
    return 1;
}
DCCMD:freeze(DCC_User:user, const args)
{
	new giveplayerid, giveplayer[MAX_PLAYER_NAME];
	if (sscanf(args, "u", giveplayerid)) return SendDC(DISCORD_CHANNEL_ID, "```Usage: /freeze [playerid]```");
	if (!IsPlayerConnected(giveplayerid)) return SendDC(DISCORD_CHANNEL_ID, "**Error: Inactive player id!**");
	TogglePlayerControllable(giveplayerid, 0);
	GetPlayerName(giveplayerid, giveplayer, MAX_PLAYER_NAME);
	SendClientMessage(giveplayerid, COLOR_RED, "You have been frozen by an admin.");
	SendDC(DISCORD_CHANNEL_ID, "``` Player %s has been frozen.```", giveplayer);
	return 1;
}
 
DCCMD:unfreeze(DCC_User:user, const args)
{
    new giveplayerid, giveplayer[MAX_PLAYER_NAME];
	if (sscanf(args, "u", giveplayerid)) return SendDC(DISCORD_CHANNEL_ID, "```Usage: /unfreeze [playerid]```");
	if (!IsPlayerConnected(giveplayerid)) return SendDC(DISCORD_CHANNEL_ID, "**Error: Inactive player id!**");
    TogglePlayerControllable(giveplayerid, 1);
    GetPlayerName(giveplayerid, giveplayer, MAX_PLAYER_NAME);
	SendClientMessage(giveplayerid, COLOR_RED, "You have been unfrozen by an admin.");
	SendDC(DISCORD_CHANNEL_ID, "``` Player %s has been unfrozen.```", giveplayer);
	return 1;
}
DCCMD:players(DCC_User:user, const args)
{
    new count = 0;
	new name[24], IP[50];
	SendDC(DISCORD_CHANNEL_ID, "**__Online Players__**");
	for(new i=0; i < MAX_PLAYERS; i++) {
	if(!IsPlayerConnected(i)) continue;
	GetPlayerName(i, name, MAX_PLAYER_NAME);
    GetPlayerIp(i, IP, sizeof(IP));
	{
	   SendDC(DISCORD_CHANNEL_ID, "```%s(%d) %s %i```", name, i, IP, GetPlayerScore(i));
	   count++; }
	}
	if (count == 0) return SendDC(DISCORD_CHANNEL_ID, "There are no players online.");
	return 1;
}