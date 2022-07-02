
enum zoneinfo
{
	z_name[27],
	Float:z_minx,
	Float:z_miny,
	Float:z_maxx,
	Float:z_maxy
}

new zonenames[][zoneinfo] =
{
	{"'The Big Ear'",                -410.02,  1403.34,  -137.969,  1681.23},
	{"Aldea Malvada",                -1372.14,  2498.52,  -1277.59,  2615.35},
	{"Angel Pine",                   -2324.94,  -2584.29,  -1964.22,  -2212.11},
	{"Arco del Oeste",               -901.129,  2221.86,  -592.09,  2571.97},
	{"Avispa Country Club",          -2646.4,  -355.493,  -2270.04,  -222.589},
	{"Avispa Country Club",          -2831.89,  -430.276,  -2646.4,  -222.589},
	{"Avispa Country Club",          -2361.51,  -417.199,  -2270.04,  -355.493},
	{"Avispa Country Club",          -2667.81,  -302.135,  -2646.4,  -262.32},
	{"Avispa Country Club",          -2470.04,  -355.493,  -2270.04,  -318.493},
	{"Avispa Country Club",          -2550.04,  -355.493,  -2470.04,  -318.493},
	{"Back o Beyond",                -1166.97,  -2641.19,  -321.744,  -1856.03},
	{"Battery Point",                -2741.07,  1268.41,  -2533.04,  1490.47},
	{"Bayside",                      -2741.07,  2175.15,  -2353.17,  2722.79},
	{"Bayside Marina",               -2353.17,  2275.79,  -2153.17,  2475.79},
	{"Bayside Tunnel",               -2290.19,  2548.29,  -1950.19,  2723.29},
	{"Beacon Hill",                  -399.633,  -1075.52,  -319.033,  -977.516},
	{"Blackfield",                   964.391,  1203.22,  1197.39,  1403.22},
	{"Blackfield",                   964.391,  1403.22,  1197.39,  1726.22},
	{"Blackfield Chapel",            1375.6,  596.349,  1558.09,  823.228},
	{"Blackfield Chapel",            1325.6,  596.349,  1375.6,  795.01},
	{"Blackfield Intersection",      1197.39,  1044.69,  1277.05,  1163.39},
	{"Blackfield Intersection",      1166.53,  795.01,  1375.6,  1044.69},
	{"Blackfield Intersection",      1277.05,  1044.69,  1315.35,  1087.63},
	{"Blackfield Intersection",      1375.6,  823.228,  1457.39,  919.447},
	{"Blueberry",                    104.54,  -220.137,  349.607,  152.236},
	{"Blueberry",                    19.6074,  -404.136,  349.607,  -220.137},
	{"Blueberry Acres",              -319.676,  -220.137,  104.534,  293.324},
	{"Caligula's Palace",            2087.39,  1543.23,  2437.39,  1703.23},
	{"Caligula's Palace",            2137.4,  1703.23,  2437.39,  1783.23},
	{"Calton Heights",               -2274.17,  744.17,  -1982.32,  1358.9},
	{"Chinatown",                    -2274.17,  578.396,  -2078.67,  744.17},
	{"City Hall",                    -2867.85,  277.411,  -2593.44,  458.411},
	{"Come-A-Lot",                   2087.39,  943.235,  2623.18,  1203.23},
	{"Commerce",                     1323.9,  -1842.27,  1701.9,  -1722.26},
	{"Commerce",                     1323.9,  -1722.226,  1440.9,  -1577.59},
	{"Commerce",                     1370.85,  -1577.59,  1463.9,  -1384.95},
	{"Commerce",                     1463.9,  -1577.59,  1667.96,  -1430.87},
	{"Commerce",                     1583.5,  -1722.26,  1758.9,  -1577.59},
	{"Commerce",                     1667.96,  -1577.59,  1812.62,  -1430.87},
	{"Conference Center",            1046.15,  -1804.21,  1323.9,  -1722.26},
	{"Conference Center",            1073.22,  -1842.27,  1323.9,  -1804.21},
	{"Cranberry Station",            -2007.83,  56.3063,  -1922.0,  224.782},
	{"Creek",                        2749.9,  1937.25,  2921.62,  2669.79},
	{"Dillimore",                    580.794,  -674.885,  861.085,  -404.79},
	{"Doherty",                      -2270.04,  -324.114,  -1794.92,  -222.589},
	{"Doherty",                      -2173.04,  -222.589,  -1794.92,  265.243},
	{"Downtown",                     -1982.32,  744.17,  -1871.72,  1274.26},
	{"Downtown",                     -1871.72,  1176.42,  -1620.3,  1274.26},
	{"Downtown",                     -1700.01,  744.267,  -1580.01,  1176.52},
	{"Downtown",                     -1580.01,  744.267,  -1499.89,  1025.98},
	{"Downtown",                     -2078.67,  578.396,  -1499.89,  744.267},
	{"Downtown",                     -1993.28,  265.243,  -1794.92,  578.396},
	{"Downtown Los Santos",          1463.9,  -1430.87,  1724.76,  -1290.87},
	{"Downtown Los Santos",          1724.76,  -1430.87,  1812.62,  -1250.9},
	{"Downtown Los Santos",          1463.9,  -1290.87,  1724.76,  -1150.87},
	{"Downtown Los Santos",          1370.85,  -1384.95,  1463.9,  -1170.87},
	{"Downtown Los Santos",          1724.76,  -1250.9,  1812.62,  -1150.87},
	{"Downtown Los Santos",          1370.85,  -1170.87,  1463.9,  -1130.85},
	{"Downtown Los Santos",          1378.33,  -1130.85,  1463.9,  -1026.33},
	{"Downtown Los Santos",          1391.05,  -1026.33,  1463.9,  -926.999},
	{"Downtown Los Santos",          1507.51,  -1385.21,  1582.55,  -1325.31},
	{"East Beach",                   2632.83,  -1852.87,  2959.35,  -1668.13},
	{"East Beach",                   2632.83,  -1668.13,  2747.74,  -1393.42},
	{"East Beach",                   2747.74,  -1668.13,  2959.35,  -1498.62},
	{"East Beach",                   2747.74,  -1498.62,  2959.35,  -1120.04},
	{"East Los Santos",              2421.03,  -1628.53,  2632.83,  -1454.35},
	{"East Los Santos",              2222.56,  -1628.53,  2421.03,  -1494.03},
	{"East Los Santos",              2266.26,  -1494.03,  2381.68,  -1372.04},
	{"East Los Santos",              2381.68,  -1494.03,  2421.03,  -1454.35},
	{"East Los Santos",              2281.45,  -1372.04,  2381.68,  -1135.04},
	{"East Los Santos",              2381.68,  -1454.35,  2462.13,  -1135.04},
	{"East Los Santos",              2462.13,  -1454.35,  2581.73,  -1135.04},
	{"Easter Basin",                 -1794.92,  249.904,  -1242.98,  578.396},
	{"Easter Basin",                 -1794.92,  -50.0963,  -1499.89,  249.904},
	{"Easter Bay Airport",           -1499.89,  -50.0,  -1242.98,  249.904},
	{"Easter Bay Airport",           -1794.92,  -730.118,  -1213.91,  -50.0963},
	{"Easter Bay Airport",           -1213.91,  -730.118,  -1132.82,  -50.0963},
	{"Easter Bay Airport",           -1242.98,  -50.0963,  -1213.91,  578.396},
	{"Easter Bay Airport",           -1213.91,  -50.096,  -947.98,  578.396},
	{"Easter Bay Airport",           -1315.42,  -405.388,  -1264.4,  -209.543},
	{"Easter Bay Airport",           -1354.39,  -287.398,  -1315.42,  -209.543},
	{"Easter Bay Airport",           -1490.33,  -209.543,  -1264.4,  -148.388},
	{"Easter Bay Chemicals",         -1132.82,  -768.027,  -956.476,  -578.118},
	{"Easter Bay Chemicals",         -1132.82,  -787.391,  -956.476,  -768.027},
	{"Easter Tunnel",                -1709.71,  -833.034,  -1446.01,  -730.118},
	{"El Castillo del Diablo",       -464.515,  2217.68,  -208.57,  2580.36},
	{"El Castillo del Diablo",       -208.57,  2123.01,  114.033,  2337.18},
	{"El Castillo del Diablo",       -208.57,  2337.18,  8.42999,  2487.18},
	{"El Corona",                    1812.62,  -2179.25,  1970.62,  -1852.87},
	{"El Corona",                    1692.62,  -2179.25,  1812.62,  -1842.27},
	{"El Quebrados",                 -1645.23,  2498.52,  -1372.14,  2777.85},
	{"Esplanade East",               -1620.3,  1176.52,  -1580.01,  1274.26},
	{"Esplanade East",               -1580.01,  1025.98,  -1499.89,  1274.26},
	{"Esplanade East",               -1499.89,  578.396,  -1339.89,  1274.26},
	{"Esplanade North",              -2533.04,  1358.9,  -1996.66,  1501.21},
	{"Esplanade North",              -1996.66,  1358.9,  -1524.24,  1592.51},
	{"Esplanade North",              -1982.32,  1274.26,  -1524.24,  1358.9},
	{"Fallen Tree",                  -792.254,  -698.555,  -452.404,  -380.043},
	{"Fallow Bridge",                434.341,  366.572,  603.035,  555.68},
	{"Fern Ridge",                   508.189,  -139.259,  1306.66,  119.526},
	{"Financial",                    -1871.72,  744.17,  -1701.3,  1176.42},
	{"Fisher's Lagoon",              1916.99,  -233.323,  2131.72,  13.8002},
	{"Flint Intersection",           -187.7,  -1596.76,  17.0632,  -1276.6},
	{"Flint Range",                  -594.191,  -1648.55,  -187.7,  -1276.6},
	{"Flint Water",                  -314.426,  -753.874,  -106.339,  -463.073},
	{"Fort Carson",                  -376.233,  826.326,  123.717,  1220.44},
	{"Foster Valley",                -2270.04,  -430.276,  -2178.69,  -324.114},
	{"Foster Valley",                -2178.69,  -599.884,  -1794.92,  -324.114},
	{"Foster Valley",                -2178.69,  -1115.58,  -1794.92,  -599.884},
	{"Foster Valley",                -2178.69,  -1250.97,  -1794.92,  -1115.58},
	{"Frederick Bridge",             2759.25,  296.501,  2774.25,  594.757},
	{"Gant Bridge",                  -2741.45,  1659.68,  -2616.4,  2175.15},
	{"Gant Bridge",                  -2741.07,  1490.47,  -2616.4,  1659.68},
	{"Ganton",                       2222.56,  -1852.87,  2632.83,  -1722.33},
	{"Ganton",                       2222.56,  -1722.33,  2632.83,  -1628.53},
	{"Garcia",                       -2411.22,  -222.589,  -2173.04,  265.243},
	{"Garcia",                       -2395.14,  -222.589,  -2354.09,  -204.792},
	{"Garver Bridge",                -1339.89,  828.129,  -1213.91,  1057.04},
	{"Garver Bridge",                -1213.91,  950.022,  -1087.93,  1178.93},
	{"Garver Bridge",                -1499.89,  696.442,  -1339.89,  925.353},
	{"Glen Park",                    1812.62,  -1449.67,  1996.91,  -1350.72},
	{"Glen Park",                    1812.62,  -1100.82,  1994.33,  -973.38},
	{"Glen Park",                    1812.62,  -1350.72,  2056.86,  -1100.82},
	{"Green Palms",                  176.581,  1305.45,  338.658,  1520.72},
	{"Greenglass College",           964.391,  1044.69,  1197.39,  1203.22},
	{"Greenglass College",           964.391,  930.89,  1166.53,  1044.69},
	{"Hampton Barns",                603.035,  264.312,  761.994,  366.572},
	{"Hankypanky Point",             2576.92,  62.1579,  2759.25,  385.503},
	{"Harry Gold Parkway",           1777.39,  863.232,  1817.39,  2342.83},
	{"Hashbury",                     -2593.44,  -222.589,  -2411.22,  54.722},
	{"Hilltop Farm",                 967.383,  -450.39,  1176.78,  -217.9},
	{"Hunter Quarry",                337.244,  710.84,  860.554,  1031.71},
	{"Idlewood",                     1812.62,  -1852.87,  1971.66,  -1742.31},
	{"Idlewood",                     1812.62,  -1742.31,  1951.66,  -1602.31},
	{"Idlewood",                     1951.66,  -1742.31,  2124.66,  -1602.31},
	{"Idlewood",                     1812.62,  -1602.31,  2124.66,  -1449.67},
	{"Idlewood",                     2124.66,  -1742.31,  2222.56,  -1494.03},
	{"Idlewood",                     1971.66,  -1852.87,  2222.56,  -1742.31},
	{"Jefferson",                    1996.91,  -1449.67,  2056.86,  -1350.72},
	{"Jefferson",                    2124.66,  -1494.03,  2266.21,  -1449.67},
	{"Jefferson",                    2056.86,  -1372.04,  2281.45,  -1210.74},
	{"Jefferson",                    2056.86,  -1210.74,  2185.33,  -1126.32},
	{"Jefferson",                    2185.33,  -1210.74,  2281.45,  -1154.59},
	{"Jefferson",                    2056.86,  -1449.67,  2266.21,  -1372.04},
	{"Julius Thruway East",          2623.18,  943.235,  2749.9,  1055.96},
	{"Julius Thruway East",          2685.16,  1055.96,  2749.9,  2626.55},
	{"Julius Thruway East",          2536.43,  2442.55,  2685.16,  2542.55},
	{"Julius Thruway East",          2625.16,  2202.76,  2685.16,  2442.55},
	{"Julius Thruway North",         2498.21,  2542.55,  2685.16,  2626.55},
	{"Julius Thruway North",         2237.4,  2542.55,  2498.21,  2663.17},
	{"Julius Thruway North",         2121.4,  2508.23,  2237.4,  2663.17},
	{"Julius Thruway North",         1938.8,  2508.23,  2121.4,  2624.23},
	{"Julius Thruway North",         1534.56,  2433.23,  1848.4,  2583.23},
	{"Julius Thruway North",         1848.4,  2478.49,  1938.8,  2553.49},
	{"Julius Thruway North",         1704.59,  2342.83,  1848.4,  2433.23},
	{"Julius Thruway North",         1377.39,  2433.23,  1534.56,  2507.23},
	{"Julius Thruway South",         1457.39,  823.228,  2377.39,  863.229},
	{"Julius Thruway South",         2377.39,  788.894,  2537.39,  897.901},
	{"Julius Thruway West",          1197.39,  1163.39,  1236.63,  2243.23},
	{"Julius Thruway West",          1236.63,  2142.86,  1297.47,  2243.23},
	{"Juniper Hill",                 -2533.04,  578.396,  -2274.17,  968.369},
	{"Juniper Hollow",               -2533.04,  968.369,  -2274.17,  1358.9},
	{"K.A.C.C. Military Fuels",      2498.21,  2626.55,  2749.99,  2861.55},
	{"Kincaid Bridge",               -1339.89,  599.218,  -1213.91,  828.191},
	{"Kincaid Bridge",               -1213.91,  721.111,  -1087.93,  950.022},
	{"Kincaid Bridge",               -1087.93,  855.37,  -961.95,  986.281},
	{"King's",                       -2329.31,  458.411,  -1993.28,  578.396},
	{"King's",                       -2411.22,  265.243,  -1993.28,  373.539},
	{"King's",                       -2253.54,  373.539,  -1993.28,  458.411},
	{"LVA Freight Depot",            1457.39,  863.229,  1777.4,  1143.21},
	{"LVA Freight Depot",            1375.6,  919.447,  1457.37,  1203.28},
	{"LVA Freight Depot",            1277.05,  1087.63,  1375.6,  1203.28},
	{"LVA Freight Depot",            1315.35,  1044.69,  1375.6,  1087.63},
	{"LVA Freight Depot",            1236.63,  1163.41,  1277.05,  1203.28},
	{"Las Barrancas",                -926.13,  1398.73,  -719.234,  1634.69},
	{"Las Brujas",                   -365.167,  2123.01,  -208.57,  2217.68},
	{"Las Colinas",                  1994.33,  -1100.82,  2056.86,  -920.815},
	{"Las Colinas",                  2056.86,  -1126.32,  2126.86,  -920.815},
	{"Las Colinas",                  2185.33,  -1154.59,  2281.45,  -934.489},
	{"Las Colinas",                  2126.86,  -1126.32,  2185.33,  -934.489},
	{"Las Colinas",                  2747.74,  -1120.04,  2959.35,  -945.035},
	{"Las Colinas",                  2632.74,  -1135.04,  2747.74,  -945.035},
	{"Las Colinas",                  2281.45,  -1135.04,  2632.74,  -945.035},
	{"Las Payasadas",                -354.332,  2580.36,  -133.625,  2816.82},
	{"Las Venturas Airport",         1236.63,  1203.28,  1457.37,  1883.11},
	{"Las Venturas Airport",         1457.37,  1203.28,  1777.39,  1883.11},
	{"Las Venturas Airport",         1457.37,  1143.21,  1777.4,  1203.28},
	{"Las Venturas Airport",         1515.81,  1586.4,  1729.95,  1714.56},
	{"Last Dime Motel",              1823.08,  596.349,  1997.22,  823.228},
	{"Leafy Hollow",                 -1166.97,  -1856.03,  -815.624,  -1602.07},
	{"Lil' Probe Inn",               -90.2183,  1286.85,  153.859,  1554.12},
	{"Linden Side",                  2749.9,  943.235,  2923.39,  1198.99},
	{"Linden Station",               2749.9,  1198.99,  2923.39,  1548.99},
	{"Linden Station",               2811.25,  1229.59,  2861.25,  1407.59},
	{"Little Mexico",                1701.9,  -1842.27,  1812.62,  -1722.26},
	{"Little Mexico",                1758.9,  -1722.26,  1812.62,  -1577.59},
	{"Los Flores",                   2581.73,  -1454.35,  2632.83,  -1393.42},
	{"Los Flores",                   2581.73,  -1393.42,  2747.74,  -1135.04},
	{"Los Santos Inlet",             -321.744,  -2224.43,  44.6147,  -1724.43},
	{"Los Santos International",     1249.62,  -2394.33,  1852.0,  -2179.25},
	{"Los Santos International",     1852.0,  -2394.33,  2089.0,  -2179.25},
	{"Los Santos International",     1382.73,  -2730.88,  2201.82,  -2394.33},
	{"Los Santos International",     1974.63,  -2394.33,  2089.0,  -2256.59},
	{"Los Santos International",     1400.97,  -2669.26,  2189.82,  -2597.26},
	{"Los Santos International",     2051.63,  -2597.26,  2152.45,  -2394.33},
	{"Marina",                       647.712,  -1804.21,  851.449,  -1577.59},
	{"Marina",                       647.712,  -1577.59,  807.922,  -1416.25},
	{"Marina",                       807.922,  -1577.59,  926.922,  -1416.25},
	{"Market",                       787.461,  -1416.25,  1072.66,  -1310.21},
	{"Market",                       952.663,  -1310.21,  1072.66,  -1130.85},
	{"Market",                       1072.66,  -1416.25,  1370.85,  -1130.85},
	{"Market",                       926.922,  -1577.59,  1370.85,  -1416.25},
	{"Market Station",               787.461,  -1410.93,  866.009,  -1310.21},
	{"Martin Bridge",                -222.179,  293.324,  -122.126,  476.465},
	{"Missionary Hill",              -2994.49,  -811.276,  -2178.69,  -430.276},
	{"Montgomery",                   1119.51,  119.526,  1451.4,  493.323},
	{"Montgomery",                   1451.4,  347.457,  1582.44,  420.802},
	{"Montgomery Intersection",      1546.65,  208.164,  1745.83,  347.457},
	{"Montgomery Intersection",      1582.44,  347.457,  1664.62,  401.75},
	{"Mount Chiliad",                -2994.49,  -2189.91,  -2178.69,  -1115.58},
	{"Mount Chiliad",                -2178.69,  -1771.66,  -1936.12,  -1250.97},
	{"Mount Chiliad",                -2997.47,  -1115.58,  -2178.69,  -971.913},
	{"Mount Chiliad",                -2178.69,  -2189.91,  -2030.12,  -1771.66},
	{"Mulholland",                   1414.07,  -768.027,  1667.61,  -452.425},
	{"Mulholland",                   1281.13,  -452.425,  1641.13,  -290.913},
	{"Mulholland",                   1269.13,  -768.027,  1414.07,  -452.425},
	{"Mulholland",                   1357.0,  -926.999,  1463.9,  -768.027},
	{"Mulholland",                   1318.13,  -910.17,  1357.0,  -768.027},
	{"Mulholland",                   1169.13,  -910.17,  1318.13,  -768.027},
	{"Mulholland",                   768.694,  -954.662,  952.604,  -860.619},
	{"Mulholland",                   687.802,  -860.619,  911.802,  -768.027},
	{"Mulholland",                   737.573,  -768.027,  1142.29,  -674.885},
	{"Mulholland",                   1096.47,  -910.17,  1169.13,  -768.027},
	{"Mulholland",                   952.604,  -937.184,  1096.47,  -860.619},
	{"Mulholland",                   911.802,  -860.619,  1096.47,  -768.027},
	{"Mulholland",                   861.085,  -674.885,  1156.55,  -600.896},
	{"Mulholland Intersection",      1463.9,  -1150.87,  1812.62,  -768.027},
	{"North Rock",                   2285.37,  -768.027,  2770.59,  -269.74},
	{"Ocean Docks",                  2373.77,  -2697.09,  2809.22,  -2330.46},
	{"Ocean Docks",                  2201.82,  -2418.33,  2324.0,  -2095.0},
	{"Ocean Docks",                  2324.0,  -2302.33,  2703.58,  -2145.1},
	{"Ocean Docks",                  2089.0,  -2394.33,  2201.82,  -2235.84},
	{"Ocean Docks",                  2201.82,  -2730.88,  2324.0,  -2418.33},
	{"Ocean Docks",                  2703.58,  -2302.33,  2959.35,  -2126.9},
	{"Ocean Docks",                  2324.0,  -2145.1,  2703.58,  -2059.23},
	{"Ocean Flats",                  -2994.49,  277.411,  -2867.85,  458.411},
	{"Ocean Flats",                  -2994.49,  -222.589,  -2593.44,  277.411},
	{"Ocean Flats",                  -2994.49,  -430.276,  -2831.89,  -222.589},
	{"Octane Springs",               338.658,  1228.51,  664.308,  1655.05},
	{"Old Venturas Strip",           2162.39,  2012.18,  2685.16,  2202.76},
	{"Palisades",                    -2994.49,  458.411,  -2741.07,  1339.61},
	{"Palomino Creek",               2160.22,  -149.004,  2576.92,  228.322},
	{"Paradiso",                     -2741.07,  793.411,  -2533.04,  1268.41},
	{"Pershing Square",              1440.9,  -1722.26,  1583.5,  -1577.59},
	{"Pilgrim",                      2437.39,  1383.23,  2624.4,  1783.23},
	{"Pilgrim",                      2624.4,  1383.23,  2685.16,  1783.23},
	{"Pilson Intersection",          1098.39,  2243.23,  1377.39,  2507.23},
	{"Pirates in Men's Pants",       1817.39,  1469.23,  2027.4,  1703.23},
	{"Playa del Seville",            2703.58,  -2126.9,  2959.35,  -1852.87},
	{"Prickle Pine",                 1534.56,  2583.23,  1848.4,  2863.23},
	{"Prickle Pine",                 1117.4,  2507.23,  1534.56,  2723.23},
	{"Prickle Pine",                 1848.4,  2553.49,  1938.8,  2863.23},
	{"Prickle Pine",                 1938.8,  2624.23,  2121.4,  2861.55},
	{"Queens",                       -2533.04,  458.411,  -2329.31,  578.396},
	{"Queens",                       -2593.44,  54.722,  -2411.22,  458.411},
	{"Queens",                       -2411.22,  373.539,  -2253.54,  458.411},
	{"Randolph Industrial Estate",   1558.09,  596.349,  1823.08,  823.235},
	{"Redsands East",                1817.39,  2011.83,  2106.7,  2202.76},
	{"Redsands East",                1817.39,  2202.76,  2011.94,  2342.83},
	{"Redsands East",                1848.4,  2342.83,  2011.94,  2478.49},
	{"Redsands West",                1236.63,  1883.11,  1777.39,  2142.86},
	{"Redsands West",                1297.47,  2142.86,  1777.39,  2243.23},
	{"Redsands West",                1377.39,  2243.23,  1704.59,  2433.23},
	{"Redsands West",                1704.59,  2243.23,  1777.39,  2342.83},
	{"Regular Tom",                  -405.77,  1712.86,  -276.719,  1892.75},
	{"Restricted Area",              -91.586,  1655.05,  421.234,  2123.01},
	{"Richman",                      647.557,  -1118.28,  787.461,  -954.662},
	{"Richman",                      647.557,  -954.662,  768.694,  -860.619},
	{"Richman",                      225.165,  -1369.62,  334.503,  -1292.07},
	{"Richman",                      225.165,  -1292.07,  466.223,  -1235.07},
	{"Richman",                      72.6481,  -1404.97,  225.165,  -1235.07},
	{"Richman",                      72.6481,  -1235.07,  321.356,  -1008.15},
	{"Richman",                      321.356,  -1235.07,  647.522,  -1044.07},
	{"Richman",                      321.356,  -1044.07,  647.557,  -860.619},
	{"Richman",                      321.356,  -860.619,  687.802,  -768.027},
	{"Richman",                      321.356,  -768.027,  700.794,  -674.885},
	{"Robada Intersection",          -1119.01,  1178.93,  -862.025,  1351.45},
	{"Roca Escalante",               2237.4,  2202.76,  2536.43,  2542.55},
	{"Roca Escalante",               2536.43,  2202.76,  2625.16,  2442.55},
	{"Rockshore East",               2537.39,  676.549,  2902.35,  943.235},
	{"Rockshore West",               1997.22,  596.349,  2377.39,  823.228},
	{"Rockshore West",               2377.39,  596.349,  2537.39,  788.894},
	{"Rodeo",                        72.6481,  -1684.65,  225.165,  -1544.17},
	{"Rodeo",                        72.6481,  -1544.17,  225.165,  -1404.97},
	{"Rodeo",                        225.165,  -1684.65,  312.803,  -1501.95},
	{"Rodeo",                        225.165,  -1501.95,  334.503,  -1369.62},
	{"Rodeo",                        334.503,  -1501.95,  422.68,  -1406.05},
	{"Rodeo",                        312.803,  -1684.65,  422.68,  -1501.95},
	{"Rodeo",                        422.68,  -1684.65,  558.099,  -1570.2},
	{"Rodeo",                        558.099,  -1684.65,  647.522,  -1384.90},
	{"Rodeo",                        466.223,  -1570.2,  558.099,  -1385.07},
	{"Rodeo",                        422.68,  -1570.2,  466.223,  -1406.05},
	{"Rodeo",                        466.223,  -1385.07,  647.522,  -1235.07},
	{"Rodeo",                        334.503,  -1406.05,  466.223,  -1292.07},
	{"Royal Casino",                 2087.39,  1383.23,  2437.39,  1543.23},
	{"San Andreas Sound",            2450.39,  385.503,  2759.25,  562.349},
	{"San Fierro Bay",               -2616.4,  1501.21,  -1996.66,  1659.68},
	{"San Fierro Bay",               -2616.4,  1659.68,  -1996.66,  2175.15},
	{"Santa Flora",                  -2741.07,  458.411,  -2533.04,  793.411},
	{"Santa Maria Beach",            342.648,  -2173.29,  647.712,  -1684.65},
	{"Santa Maria Beach",            72.6481,  -2173.29,  342.648,  -1684.65},
	{"Shady Cabin",                  -1632.83,  -2263.44,  -1601.33,  -2231.79},
	{"Shady Creeks",                 -1820.64,  -2643.68,  -1226.78,  -1771.66},
	{"Shady Creeks",                 -2030.12,  -2174.89,  -1820.64,  -1771.66},
	{"Sherman Reservoir",            -789.737,  1659.68,  -599.505,  1929.41},
	{"Sobell Rail Yards",            2749.9,  1548.99,  2923.39,  1937.25},
	{"Spinybed",                     2121.4,  2663.17,  2498.21,  2861.55},
	{"Starfish Casino",              2437.39,  1783.23,  2685.16,  2012.18},
	{"Starfish Casino",              2437.39,  1858.1,  2495.09,  1970.85},
	{"Starfish Casino",              2162.39,  1883.23,  2437.39,  2012.18},
	{"Temple",                       1252.33,  -1130.85,  1378.33,  -1026.33},
	{"Temple",                       1252.33,  -1026.33,  1391.05,  -926.999},
	{"Temple",                       1252.33,  -926.999,  1357.0,  -910.17},
	{"Temple",                       952.663,  -1130.84,  1096.47,  -937.184},
	{"Temple",                       1096.47,  -1130.84,  1252.33,  -1026.33},
	{"Temple",                       1096.47,  -1026.33,  1252.33,  -910.17},
	{"The Camel's Toe",              2087.39,  1203.23,  2640.4,  1383.23},
	{"The Clown's Pocket",           2162.39,  1783.23,  2437.39,  1883.23},
	{"The Emerald Isle",             2011.94,  2202.76,  2237.4,  2508.23},
	{"The Farm",                     -1209.67,  -1317.1,  -908.161,  -787.391},
	{"The Four Dragons Casino",      1817.39,  863.232,  2027.39,  1083.23},
	{"The High Roller",              1817.39,  1283.23,  2027.39,  1469.23},
	{"The Mako Span",                1664.62,  401.75,  1785.14,  567.203},
	{"The Panopticon",               -947.98,  -304.32,  -319.676,  327.071},
	{"The Pink Swan",                1817.39,  1083.23,  2027.39,  1283.23},
	{"The Sherman Dam",              -968.772,  1929.41,  -481.126,  2155.26},
	{"The Strip",                    2027.4,  863.229,  2087.39,  1703.23},
	{"The Strip",                    2106.7,  1863.23,  2162.39,  2202.76},
	{"The Strip",                    2027.4,  1783.23,  2162.39,  1863.23},
	{"The Strip",                    2027.4,  1703.23,  2137.4,  1783.23},
	{"The Visage",                   1817.39,  1863.23,  2106.7,  2011.83},
	{"The Visage",                   1817.39,  1703.23,  2027.4,  1863.23},
	{"Unity Station",                1692.62,  -1971.8,  1812.62,  -1932.8},
	{"Valle Ocultado",               -936.668,  2611.44,  -715.961,  2847.9},
	{"Verdant Bluffs",               930.221,  -2488.42,  1249.62,  -2006.78},
	{"Verdant Bluffs",               1073.22,  -2006.78,  1249.62,  -1842.27},
	{"Verdant Bluffs",               1249.62,  -2179.25,  1692.62,  -1842.27},
	{"Verdant Meadows",              37.0325,  2337.18,  435.998,  2677.9},
	{"Verona Beach",                 647.712,  -2173.29,  930.221,  -1804.21},
	{"Verona Beach",                 930.221,  -2006.78,  1073.22,  -1804.21},
	{"Verona Beach",                 851.449,  -1804.21,  1046.15,  -1577.59},
	{"Verona Beach",                 1161.52,  -1722.26,  1323.9,  -1577.59},
	{"Verona Beach",                 1046.15,  -1722.26,  1161.52,  -1577.59},
	{"Vinewood",                     787.461,  -1310.21,  952.663,  -1130.84},
	{"Vinewood",                     787.461,  -1130.84,  952.604,  -954.662},
	{"Vinewood",                     647.557,  -1227.28,  787.461,  -1118.28},
	{"Vinewood",                     647.712,  -1416.25,  787.461,  -1227.28},
	{"Whitewood Estates",            883.308,  1726.22,  1098.31,  2507.23},
	{"Whitewood Estates",            1098.31,  1726.22,  1197.39,  2243.23},
	{"Willowfield",                  1970.62,  -2179.25,  2089.0,  -1852.87},
	{"Willowfield",                  2089.0,  -2235.84,  2201.82,  -1989.9},
	{"Willowfield",                  2089.0,  -1989.9,  2324.0,  -1852.87},
	{"Willowfield",                  2201.82,  -2095.0,  2324.0,  -1989.9},
	{"Willowfield",                  2541.7,  -1941.4,  2703.58,  -1852.87},
	{"Willowfield",                  2324.0,  -2059.23,  2541.7,  -1852.87},
	{"Willowfield",                  2541.7,  -2059.23,  2703.58,  -1941.4},
	{"Yellow Bell Golf Course",      1117.4,  2723.23,  1457.46,  2863.23},
	{"Yellow Bell Golf Course",      1457.46,  2723.23,  1534.56,  2863.23},
	{"Yellow Bell Station",          1377.48,  2600.43,  1492.45,  2687.36},

	{"Los Santos",                   44.6147,  -2892.97,  2997.06,  -768.027},
	{"San Fierro",                   -2997.47,  -1115.58,  -1213.91,  1659.68},
	{"Las Venturas",                 869.461,  596.349,  2997.06,  2993.87},
	{"Red County",                   -1213.91,  -768.027,  2997.06,  596.349},
	{"Flint County",                 -1213.91,  -2892.97,  44.6147,  -768.027},
	{"Whetstone",                    -2997.47,  -2892.97,  -1213.91,  -1115.58},
	{"Bone County",                  -480.539,  596.349,  869.461,  2993.87},
	{"Tierra Robada",                -2997.47,  1659.68,  -480.539,  2993.87},
	{"Tierra Robada",                -1213.91,  596.349,  -480.539,  1659.68},

	{"San Andreas",                  0.0, 0.0, 0.0, 0.0}
};

new zonetype[sizeof(zonenames)];