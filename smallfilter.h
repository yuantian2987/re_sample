/* Included by resamplesubs.c */ 
#define SMALL_FILTER_NMULT ((HWORD)13)
//#define SMALL_FILTER_SCALE 13128 /* Unity-gain scale factor */
#define SMALL_FILTER_SCALE 13728 /* Unity-gain scale factor */
#define SMALL_FILTER_NWING 1536 /* Filter table length */
#ifdef USE_SMALLFILTER
static HWORD SMALL_FILTER_IMP[] /* Impulse response */ = {
32767,
32766,
32763,
32759,
32753,
32745,
32735,
32724,
32711,
32696,
32679,
32660,
32640,
32618,
32595,
32569,
32542,
32513,
32482,
32450,
32416,
32380,
32342,
32303,
32262,
32219,
32175,
32129,
32081,
32031,
31980,
31927,
31872,
31816,
31758,
31699,
31638,
31575,
31510,
31444,
31376,
31307,
31236,
31163,
31089,
31013,
30936,
30857,
30777,
30695,
30611,
30526,
30439,
30351,
30262,
30170,
30078,
29984,
29888,
29791,
29692,
29592,
29491,
29388,
29284,
29178,
29071,
28963,
28853,
28742,
28629,
28516,
28400,
28284,
28166,
28047,
27927,
27805,
27682,
27558,
27433,
27307,
27179,
27050,
26920,
26789,
26657,
26523,
26388,
26253,
26116,
25978,
25839,
25699,
25558,
25416,
25273,
25129,
24984,
24838,
24691,
24543,
24394,
24245,
24094,
23943,
23790,
23637,
23483,
23328,
23173,
23016,
22859,
22701,
22543,
22383,
22223,
22062,
21901,
21739,
21576,
21413,
21249,
21084,
20919,
20753,
20587,
20420,
20253,
20085,
19917,
19748,
19579,
19409,
19239,
19068,
18897,
18726,
18555,
18383,
18210,
18038,
17865,
17692,
17518,
17345,
17171,
16997,
16822,
16648,
16473,
16298,
16124,
15949,
15773,
15598,
15423,
15248,
15072,
14897,
14722,
14546,
14371,
14196,
14020,
13845,
13670,
13495,
13320,
13146,
12971,
12797,
12623,
12449,
12275,
12101,
11928,
11755,
11582,
11410,
11237,
11066,
10894,
10723,
10552,
10381,
10211,
10042,
9872,
9704,
9535,
9367,
9200,
9033,
8866,
8700,
8535,
8370,
8206,
8042,
7879,
7716,
7554,
7393,
7232,
7072,
6912,
6753,
6595,
6438,
6281,
6125,
5970,
5815,
5661,
5508,
5356,
5204,
5053,
4903,
4754,
4606,
4458,
4312,
4166,
4021,
3877,
3733,
3591,
3450,
3309,
3169,
3031,
2893,
2756,
2620,
2485,
2351,
2218,
2086,
1955,
1825,
1696,
1569,
1442,
1316,
1191,
1067,
944,
822,
702,
582,
463,
346,
230,
114,
0,
-112,
-224,
-335,
-445,
-553,
-661,
-767,
-873,
-977,
-1080,
-1182,
-1282,
-1382,
-1480,
-1578,
-1674,
-1769,
-1862,
-1955,
-2046,
-2136,
-2226,
-2313,
-2400,
-2486,
-2570,
-2653,
-2735,
-2816,
-2895,
-2974,
-3051,
-3127,
-3202,
-3275,
-3348,
-3419,
-3489,
-3558,
-3626,
-3692,
-3757,
-3822,
-3884,
-3946,
-4007,
-4066,
-4124,
-4181,
-4237,
-4292,
-4345,
-4398,
-4449,
-4499,
-4547,
-4595,
-4642,
-4687,
-4731,
-4774,
-4816,
-4857,
-4896,
-4935,
-4972,
-5008,
-5043,
-5077,
-5110,
-5142,
-5173,
-5202,
-5231,
-5258,
-5284,
-5309,
-5334,
-5357,
-5379,
-5399,
-5419,
-5438,
-5456,
-5473,
-5488,
-5503,
-5517,
-5529,
-5541,
-5552,
-5561,
-5570,
-5578,
-5584,
-5590,
-5595,
-5599,
-5602,
-5604,
-5605,
-5605,
-5604,
-5602,
-5600,
-5596,
-5592,
-5586,
-5580,
-5573,
-5565,
-5557,
-5547,
-5537,
-5526,
-5514,
-5501,
-5487,
-5473,
-5458,
-5442,
-5425,
-5408,
-5390,
-5371,
-5351,
-5331,
-5310,
-5288,
-5266,
-5242,
-5219,
-5194,
-5169,
-5143,
-5117,
-5090,
-5062,
-5034,
-5005,
-4976,
-4946,
-4915,
-4884,
-4852,
-4820,
-4788,
-4754,
-4720,
-4686,
-4651,
-4616,
-4580,
-4544,
-4507,
-4470,
-4433,
-4395,
-4356,
-4317,
-4278,
-4239,
-4199,
-4158,
-4117,
-4076,
-4035,
-3993,
-3951,
-3909,
-3866,
-3823,
-3779,
-3736,
-3692,
-3648,
-3603,
-3559,
-3514,
-3469,
-3424,
-3378,
-3332,
-3286,
-3240,
-3194,
-3148,
-3101,
-3054,
-3007,
-2960,
-2913,
-2866,
-2819,
-2771,
-2724,
-2676,
-2629,
-2581,
-2533,
-2485,
-2437,
-2390,
-2342,
-2294,
-2246,
-2198,
-2150,
-2102,
-2054,
-2006,
-1959,
-1911,
-1863,
-1816,
-1768,
-1721,
-1673,
-1626,
-1579,
-1532,
-1485,
-1438,
-1391,
-1344,
-1298,
-1252,
-1205,
-1159,
-1114,
-1068,
-1023,
-977,
-932,
-887,
-842,
-798,
-754,
-710,
-666,
-622,
-579,
-536,
-493,
-450,
-408,
-366,
-324,
-282,
-241,
-200,
-159,
-119,
-78,
-39,
0,
39,
78,
117,
155,
193,
231,
268,
305,
342,
378,
414,
450,
485,
520,
554,
588,
622,
656,
689,
722,
754,
786,
817,
849,
879,
910,
940,
970,
999,
1028,
1056,
1084,
1112,
1139,
1166,
1193,
1219,
1244,
1269,
1294,
1319,
1343,
1366,
1389,
1412,
1435,
1457,
1478,
1499,
1520,
1540,
1560,
1580,
1599,
1617,
1635,
1653,
1671,
1687,
1704,
1720,
1736,
1751,
1766,
1780,
1795,
1808,
1821,
1834,
1847,
1859,
1870,
1881,
1892,
1903,
1913,
1922,
1931,
1940,
1949,
1957,
1964,
1972,
1978,
1985,
1991,
1997,
2002,
2007,
2011,
2016,
2019,
2023,
2026,
2029,
2031,
2033,
2035,
2036,
2037,
2037,
2038,
2037,
2037,
2036,
2035,
2034,
2032,
2030,
2027,
2024,
2021,
2018,
2014,
2010,
2006,
2001,
1996,
1991,
1986,
1980,
1974,
1967,
1961,
1954,
1946,
1939,
1931,
1923,
1915,
1906,
1898,
1889,
1879,
1870,
1860,
1850,
1840,
1829,
1819,
1808,
1797,
1785,
1774,
1762,
1750,
1738,
1726,
1713,
1700,
1688,
1674,
1661,
1648,
1634,
1620,
1607,
1592,
1578,
1564,
1549,
1535,
1520,
1505,
1490,
1475,
1459,
1444,
1428,
1413,
1397,
1381,
1365,
1349,
1333,
1316,
1300,
1283,
1267,
1250,
1234,
1217,
1200,
1183,
1166,
1149,
1132,
1115,
1098,
1081,
1063,
1046,
1029,
1012,
994,
977,
959,
942,
925,
907,
890,
872,
855,
837,
820,
803,
785,
768,
750,
733,
716,
698,
681,
664,
646,
629,
612,
595,
578,
561,
544,
527,
510,
493,
477,
460,
443,
427,
410,
394,
378,
361,
345,
329,
313,
297,
281,
266,
250,
235,
219,
204,
188,
173,
158,
143,
128,
114,
99,
85,
70,
56,
42,
28,
14,
0,
-13,
-26,
-40,
-53,
-66,
-79,
-92,
-105,
-118,
-130,
-142,
-155,
-167,
-179,
-191,
-202,
-214,
-225,
-237,
-248,
-259,
-269,
-280,
-291,
-301,
-311,
-321,
-331,
-341,
-351,
-360,
-370,
-379,
-388,
-397,
-406,
-414,
-423,
-431,
-439,
-447,
-455,
-463,
-470,
-478,
-485,
-492,
-499,
-506,
-512,
-519,
-525,
-531,
-537,
-543,
-549,
-554,
-560,
-565,
-570,
-575,
-580,
-585,
-589,
-594,
-598,
-602,
-606,
-610,
-613,
-617,
-620,
-623,
-627,
-629,
-632,
-635,
-637,
-640,
-642,
-644,
-646,
-648,
-650,
-651,
-653,
-654,
-655,
-656,
-657,
-658,
-659,
-659,
-660,
-660,
-660,
-661,
-660,
-660,
-660,
-660,
-659,
-659,
-658,
-657,
-656,
-655,
-654,
-653,
-651,
-650,
-648,
-646,
-645,
-643,
-641,
-639,
-637,
-634,
-632,
-630,
-627,
-624,
-622,
-619,
-616,
-613,
-610,
-607,
-604,
-600,
-597,
-594,
-590,
-587,
-583,
-579,
-576,
-572,
-568,
-564,
-560,
-556,
-552,
-547,
-543,
-539,
-534,
-530,
-526,
-521,
-516,
-512,
-507,
-502,
-498,
-493,
-488,
-483,
-478,
-473,
-468,
-463,
-458,
-453,
-448,
-443,
-438,
-433,
-427,
-422,
-417,
-412,
-406,
-401,
-396,
-390,
-385,
-379,
-374,
-369,
-363,
-358,
-352,
-347,
-341,
-336,
-331,
-325,
-320,
-314,
-309,
-303,
-298,
-292,
-287,
-281,
-276,
-270,
-265,
-260,
-254,
-249,
-243,
-238,
-233,
-227,
-222,
-217,
-211,
-206,
-201,
-196,
-190,
-185,
-180,
-175,
-170,
-165,
-160,
-155,
-150,
-145,
-140,
-135,
-130,
-125,
-120,
-115,
-110,
-106,
-101,
-96,
-92,
-87,
-82,
-78,
-73,
-69,
-64,
-60,
-56,
-51,
-47,
-43,
-39,
-35,
-30,
-26,
-22,
-18,
-14,
-10,
-7,
-3,
0,
4,
7,
11,
15,
18,
22,
25,
29,
32,
35,
39,
42,
45,
48,
51,
54,
57,
60,
63,
66,
69,
72,
74,
77,
80,
82,
85,
87,
90,
92,
95,
97,
99,
101,
103,
106,
108,
110,
112,
114,
116,
117,
119,
121,
123,
124,
126,
127,
129,
130,
132,
133,
135,
136,
137,
138,
140,
141,
142,
143,
144,
145,
146,
147,
148,
148,
149,
150,
151,
151,
152,
153,
153,
154,
154,
154,
155,
155,
156,
156,
156,
156,
156,
157,
157,
157,
157,
157,
157,
157,
157,
157,
157,
156,
156,
156,
156,
155,
155,
155,
154,
154,
154,
153,
153,
152,
152,
151,
151,
150,
149,
149,
148,
147,
147,
146,
145,
144,
144,
143,
142,
141,
140,
140,
139,
138,
137,
136,
135,
134,
133,
132,
131,
130,
129,
128,
127,
126,
125,
124,
122,
121,
120,
119,
118,
117,
116,
114,
113,
112,
111,
110,
109,
107,
106,
105,
104,
102,
101,
100,
99,
98,
96,
95,
94,
93,
91,
90,
89,
87,
86,
85,
84,
82,
81,
80,
79,
77,
76,
75,
74,
72,
71,
70,
69,
68,
66,
65,
64,
63,
61,
60,
59,
58,
57,
55,
54,
53,
52,
51,
50,
48,
47,
46,
45,
44,
43,
42,
41,
40,
38,
37,
36,
35,
34,
33,
32,
31,
30,
29,
28,
27,
26,
25,
24,
23,
22,
22,
21,
20,
19,
18,
17,
16,
15,
15,
14,
13,
12,
11,
11,
10,
9,
8,
7,
7,
6,
5,
5,
4,
3,
3,
2,
1,
1,
0,
0,
0,
-1,
-1,
-2,
-3,
-3,
-4,
-4,
-5,
-5,
-6,
-6,
-7,
-7,
-8,
-8,
-8,
-9,
-9,
-10,
-10,
-10,
-11,
-11,
-12,
-12,
-12,
-13,
-13,
-13,
-13,
-14,
-14,
-14,
-15,
-15,
-15,
-15,
-16,
-16,
-16,
-16,
-16,
-17,
-17,
-17,
-17,
-17,
-17,
-18,
-18,
-18,
-18,
-18,
-18,
-18,
-18,
-18,
-18,
-18,
-19,
-19,
-19,
-19,
-19,
-19,
-19,
-19,
-19,
-19,
-19,
-19,
-19,
-19,
-19,
-19,
-19,
-19,
-19,
-19,
-19,
-18,
-18,
-18,
-18,
-18,
-18,
-18,
-18,
-18,
-18,
-18,
-18,
-17,
-17,
-17,
-17,
-17,
-17,
-17,
-17,
-17,
-16,
-16,
-16,
-16,
-16,
-16,
-16,
-15,
-15,
-15,
-15,
-15,
-15,
-15,
-14,
-14,
-14,
-14,
-14,
-14,
-13,
-13,
-13,
-13,
-13,
-13,
-12,
-12,
-12,
-12,
-12,
-12,
-11,
-11,
-11,
-11,
-11,
-11,
-10,
-10,
-10,
-10,
-10,
-10,
-9,
-9,
-9,
-9,
-9,
-9,
-8,
-8,
-8,
-8,
-8,
-8,
-7,
-7,
-7,
-7,
-7,
-7,
-6,
-6,
-6,
-6,
-6,
-6,
-6,
-5,
-5,
-5,
-5,
-5,
-5,
-5,
-4,
-4,
-4,
-4,
-4,
-4,
-4,
-4,
-3,
-3,
-3,
-3,
-3,
-3,
-3,
-3,
-3,
-2,
-2,
-2,
-2,
-2,
-2,
-2,
-2,
-2,
-2,
-2,
-1,
-1,
-1,
-1,
-1,
-1,
-1,
-1,
-1,
-1,
-1,
-1,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
};
static HWORD SMALL_FILTER_IMPD[] = {
-1,
-3,
-4,
-6,
-8,
-10,
-11,
-13,
-15,
-17,
-19,
-20,
-22,
-23,
-26,
-27,
-29,
-31,
-32,
-34,
-36,
-38,
-39,
-41,
-43,
-44,
-46,
-48,
-50,
-51,
-53,
-55,
-56,
-58,
-59,
-61,
-63,
-65,
-66,
-68,
-69,
-71,
-73,
-74,
-76,
-77,
-79,
-80,
-82,
-84,
-85,
-87,
-88,
-89,
-92,
-92,
-94,
-96,
-97,
-99,
-100,
-101,
-103,
-104,
-106,
-107,
-108,
-110,
-111,
-113,
-113,
-116,
-116,
-118,
-119,
-120,
-122,
-123,
-124,
-125,
-126,
-128,
-129,
-130,
-131,
-132,
-134,
-135,
-135,
-137,
-138,
-139,
-140,
-141,
-142,
-143,
-144,
-145,
-146,
-147,
-148,
-149,
-149,
-151,
-151,
-153,
-153,
-154,
-155,
-155,
-157,
-157,
-158,
-158,
-160,
-160,
-161,
-161,
-162,
-163,
-163,
-164,
-165,
-165,
-166,
-166,
-167,
-167,
-168,
-168,
-169,
-169,
-170,
-170,
-171,
-171,
-171,
-171,
-172,
-173,
-172,
-173,
-173,
-174,
-173,
-174,
-174,
-175,
-174,
-175,
-175,
-174,
-175,
-176,
-175,
-175,
-175,
-176,
-175,
-175,
-176,
-175,
-175,
-176,
-175,
-175,
-175,
-175,
-174,
-175,
-174,
-174,
-174,
-174,
-174,
-173,
-173,
-173,
-172,
-173,
-171,
-172,
-171,
-171,
-171,
-170,
-169,
-170,
-168,
-169,
-168,
-167,
-167,
-167,
-166,
-165,
-165,
-164,
-164,
-163,
-163,
-162,
-161,
-161,
-160,
-160,
-159,
-158,
-157,
-157,
-156,
-155,
-155,
-154,
-153,
-152,
-152,
-151,
-150,
-149,
-148,
-148,
-146,
-146,
-145,
-144,
-144,
-142,
-141,
-141,
-140,
-138,
-138,
-137,
-136,
-135,
-134,
-133,
-132,
-131,
-130,
-129,
-127,
-127,
-126,
-125,
-124,
-123,
-122,
-120,
-120,
-119,
-117,
-116,
-116,
-114,
-112,
-112,
-111,
-110,
-108,
-108,
-106,
-106,
-104,
-103,
-102,
-100,
-100,
-98,
-98,
-96,
-95,
-93,
-93,
-91,
-90,
-90,
-87,
-87,
-86,
-84,
-83,
-82,
-81,
-79,
-79,
-77,
-76,
-75,
-73,
-73,
-71,
-70,
-69,
-68,
-66,
-65,
-65,
-62,
-62,
-61,
-59,
-58,
-57,
-56,
-55,
-53,
-53,
-51,
-50,
-48,
-48,
-47,
-45,
-44,
-43,
-42,
-41,
-39,
-39,
-37,
-36,
-35,
-34,
-33,
-32,
-31,
-29,
-29,
-27,
-26,
-25,
-25,
-23,
-22,
-20,
-20,
-19,
-18,
-17,
-15,
-15,
-14,
-12,
-12,
-11,
-9,
-9,
-8,
-6,
-6,
-5,
-4,
-3,
-2,
-1,
0,
1,
2,
2,
4,
4,
6,
6,
7,
8,
8,
10,
10,
11,
12,
13,
14,
14,
15,
16,
17,
17,
18,
19,
20,
20,
21,
22,
22,
24,
23,
25,
25,
26,
26,
27,
28,
28,
29,
29,
30,
31,
31,
32,
32,
32,
34,
34,
34,
35,
35,
36,
36,
37,
37,
37,
38,
39,
39,
39,
39,
40,
41,
41,
41,
41,
42,
42,
42,
43,
43,
44,
43,
44,
44,
45,
44,
45,
45,
45,
46,
46,
46,
46,
46,
46,
47,
47,
47,
47,
47,
47,
47,
48,
47,
48,
47,
48,
48,
48,
48,
47,
48,
48,
48,
48,
48,
48,
48,
48,
47,
48,
48,
47,
48,
47,
48,
47,
47,
47,
47,
47,
47,
47,
46,
46,
47,
46,
45,
46,
45,
46,
45,
45,
45,
44,
44,
44,
44,
44,
43,
43,
43,
43,
42,
42,
42,
42,
41,
41,
41,
40,
41,
39,
39,
39,
39,
39,
38,
38,
38,
37,
37,
37,
36,
36,
36,
35,
35,
34,
34,
34,
34,
33,
33,
32,
32,
31,
32,
30,
31,
30,
30,
29,
29,
28,
28,
28,
27,
27,
27,
26,
25,
25,
25,
25,
24,
23,
23,
23,
23,
22,
21,
21,
21,
20,
20,
20,
19,
18,
18,
18,
18,
16,
17,
16,
16,
15,
15,
14,
15,
13,
13,
13,
13,
12,
11,
11,
11,
11,
10,
9,
9,
9,
9,
8,
7,
8,
6,
7,
6,
6,
5,
5,
4,
5,
3,
4,
3,
3,
2,
2,
2,
1,
1,
0,
1,
-1,
0,
-1,
-1,
-1,
-2,
-2,
-3,
-3,
-3,
-3,
-4,
-4,
-4,
-5,
-5,
-5,
-5,
-6,
-6,
-7,
-6,
-7,
-8,
-7,
-8,
-8,
-8,
-9,
-8,
-9,
-10,
-9,
-10,
-10,
-10,
-11,
-10,
-11,
-11,
-12,
-11,
-12,
-12,
-12,
-12,
-13,
-13,
-12,
-14,
-13,
-13,
-14,
-14,
-13,
-15,
-14,
-14,
-15,
-14,
-15,
-15,
-15,
-15,
-16,
-15,
-16,
-15,
-16,
-16,
-16,
-16,
-16,
-17,
-16,
-17,
-16,
-17,
-16,
-17,
-17,
-17,
-17,
-17,
-17,
-17,
-17,
-17,
-18,
-17,
-17,
-17,
-18,
-17,
-18,
-17,
-17,
-18,
-17,
-18,
-17,
-18,
-17,
-17,
-18,
-17,
-18,
-17,
-17,
-18,
-17,
-17,
-18,
-17,
-17,
-17,
-17,
-17,
-17,
-17,
-17,
-17,
-16,
-17,
-17,
-16,
-17,
-16,
-16,
-17,
-16,
-16,
-16,
-16,
-16,
-15,
-16,
-15,
-16,
-15,
-16,
-15,
-15,
-15,
-15,
-14,
-15,
-14,
-15,
-14,
-14,
-14,
-14,
-14,
-13,
-13,
-14,
-13,
-13,
-13,
-13,
-13,
-13,
-12,
-12,
-13,
-12,
-12,
-12,
-11,
-12,
-11,
-12,
-11,
-11,
-10,
-11,
-11,
-10,
-10,
-10,
-10,
-10,
-10,
-9,
-10,
-9,
-9,
-9,
-9,
-8,
-9,
-8,
-8,
-8,
-8,
-8,
-7,
-8,
-7,
-7,
-7,
-7,
-6,
-7,
-6,
-6,
-6,
-6,
-6,
-5,
-6,
-5,
-5,
-5,
-5,
-5,
-4,
-5,
-4,
-4,
-4,
-4,
-3,
-4,
-3,
-3,
-4,
-2,
-3,
-3,
-2,
-3,
-2,
-2,
-2,
-2,
-2,
-1,
-2,
-1,
-1,
-1,
-1,
-1,
-1,
0,
-1,
0,
0,
-1,
1,
0,
0,
0,
1,
0,
1,
1,
1,
1,
1,
1,
2,
1,
2,
2,
1,
2,
2,
2,
2,
3,
2,
2,
3,
3,
2,
3,
3,
3,
3,
3,
3,
4,
3,
3,
4,
3,
4,
4,
3,
4,
4,
4,
4,
4,
4,
5,
4,
4,
5,
4,
4,
5,
5,
4,
5,
5,
4,
5,
5,
5,
5,
5,
5,
5,
5,
5,
5,
5,
5,
5,
6,
5,
5,
5,
6,
5,
5,
6,
5,
6,
5,
5,
6,
5,
6,
5,
6,
5,
5,
6,
5,
6,
5,
6,
5,
6,
5,
6,
5,
6,
5,
5,
6,
5,
6,
5,
5,
6,
5,
5,
6,
5,
5,
5,
6,
5,
5,
5,
5,
5,
5,
5,
5,
5,
5,
5,
5,
5,
5,
5,
5,
4,
5,
5,
4,
5,
5,
4,
5,
4,
5,
4,
4,
5,
4,
4,
4,
4,
5,
4,
4,
4,
4,
4,
3,
4,
3,
4,
3,
4,
4,
3,
4,
3,
4,
3,
3,
4,
3,
3,
3,
3,
3,
3,
3,
3,
3,
3,
3,
2,
3,
3,
2,
3,
2,
3,
2,
3,
2,
2,
2,
2,
3,
2,
2,
2,
2,
2,
1,
2,
2,
2,
1,
2,
1,
2,
1,
2,
1,
2,
1,
1,
1,
2,
1,
1,
1,
1,
1,
1,
1,
1,
0,
1,
1,
1,
0,
1,
1,
0,
1,
0,
0,
1,
0,
1,
0,
0,
0,
0,
1,
0,
0,
0,
0,
0,
0,
0,
0,
0,
-1,
0,
0,
0,
-1,
0,
0,
-1,
0,
0,
-1,
0,
-1,
0,
-1,
0,
-1,
-1,
0,
-1,
-1,
0,
-1,
-1,
-1,
0,
-1,
-1,
-1,
-1,
0,
-1,
-1,
-1,
-1,
-1,
-1,
-1,
-1,
-1,
-1,
-1,
-1,
-1,
-1,
-1,
-1,
-2,
-1,
-1,
-1,
-1,
-1,
-1,
-2,
-1,
-1,
-1,
-1,
-1,
-2,
-1,
-1,
-1,
-2,
-1,
-1,
-1,
-1,
-2,
-1,
-1,
-1,
-2,
-1,
-1,
-2,
-1,
-1,
-1,
-2,
-1,
-1,
-1,
-2,
-1,
-1,
-1,
-2,
-1,
-1,
-1,
-1,
-2,
-1,
-1,
-1,
-2,
-1,
-1,
-1,
-1,
-2,
-1,
-1,
-1,
-1,
-1,
-2,
-1,
-1,
-1,
-1,
-1,
-1,
-1,
-1,
-2,
-1,
-1,
-1,
-1,
-1,
-1,
-1,
-1,
-1,
-1,
-1,
-1,
-1,
-1,
-1,
-1,
0,
-1,
-1,
-1,
-1,
-1,
-1,
-1,
0,
-1,
-1,
-1,
-1,
0,
-1,
-1,
-1,
-1,
0,
-1,
-1,
0,
-1,
-1,
0,
-1,
-1,
0,
-1,
0,
0,
-1,
0,
-1,
-1,
0,
-1,
0,
-1,
0,
-1,
0,
-1,
0,
-1,
0,
0,
-1,
0,
-1,
0,
0,
-1,
0,
-1,
0,
0,
-1,
0,
0,
0,
-1,
0,
0,
-1,
0,
0,
0,
-1,
0,
0,
0,
0,
-1,
0,
0,
0,
0,
0,
-1,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
-1,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
1,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
1,
0,
0,
0,
0,
0,
0,
0,
0,
1,
0,
0,
0,
0,
0,
0,
1,
0,
0,
0,
0,
0,
0,
1,
0,
0,
0,
0,
0,
1,
0,
0,
0,
0,
0,
1,
0,
0,
0,
0,
0,
1,
0,
0,
0,
0,
0,
1,
0,
0,
0,
0,
0,
1,
0,
0,
0,
0,
0,
1,
0,
0,
0,
0,
0,
1,
0,
0,
0,
0,
0,
1,
0,
0,
0,
0,
0,
0,
1,
0,
0,
0,
0,
0,
0,
1,
0,
0,
0,
0,
0,
0,
0,
1,
0,
0,
0,
0,
0,
0,
0,
0,
1,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
1,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
1,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
};
#endif