#ifndef __STRICT_ANSI__
#if defined(__linux__) || defined(__FreeBSD__) || defined(__OpenBSD__)
#if !defined(__ICC) && !defined(__ANDROID__)
#define HAVE_INCBIN
#endif
#endif
#endif

#ifdef HAVE_INCBIN
const int fz_resources_fonts_noto_NotoSansCypriot_Regular_ttf_size = 7980;
extern const char fz_resources_fonts_noto_NotoSansCypriot_Regular_ttf[];
asm(".section .rodata");
asm(".global fz_resources_fonts_noto_NotoSansCypriot_Regular_ttf");
asm(".type fz_resources_fonts_noto_NotoSansCypriot_Regular_ttf STT_OBJECT");
asm(".size fz_resources_fonts_noto_NotoSansCypriot_Regular_ttf, 7980");
asm(".balign 64");
asm("fz_resources_fonts_noto_NotoSansCypriot_Regular_ttf:");
asm(".incbin \"resources/fonts/noto/NotoSansCypriot-Regular.ttf\"");
#else
const int fz_resources_fonts_noto_NotoSansCypriot_Regular_ttf_size = 7980;
const char fz_resources_fonts_noto_NotoSansCypriot_Regular_ttf[] = {
0,1,0,0,0,11,0,128,0,3,0,48,79,83,47,50,130,231,110,10,0,0,1,56,0,0,0,96,
99,109,97,112,0,229,98,164,0,0,2,132,0,0,0,232,103,97,115,112,0,7,0,7,0,0,
31,32,0,0,0,12,103,108,121,102,215,9,142,17,0,0,3,228,0,0,21,18,104,101,97,
100,6,3,86,149,0,0,0,188,0,0,0,54,104,104,101,97,16,117,6,10,0,0,0,244,0,
0,0,36,104,109,116,120,71,71,29,63,0,0,1,152,0,0,0,236,108,111,99,97,151,
208,156,248,0,0,3,108,0,0,0,120,109,97,120,112,0,64,0,67,0,0,1,24,0,0,0,32,
110,97,109,101,141,73,185,116,0,0,24,248,0,0,6,6,112,111,115,116,255,105,
0,102,0,0,31,0,0,0,0,32,0,1,0,0,0,1,7,174,131,117,85,75,95,15,60,245,0,11,
8,0,0,0,0,0,204,213,56,196,0,0,0,0,210,40,203,228,0,70,255,94,7,160,5,227,
0,0,0,9,0,2,0,0,0,0,0,0,0,1,0,0,8,141,253,168,0,0,7,227,0,70,0,67,7,160,0,
1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,59,0,1,0,0,0,59,0,66,0,4,0,0,0,0,0,1,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,4,5,164,1,144,0,5,0,0,5,154,5,51,0,0,1,31,5,
154,5,51,0,0,3,209,0,102,2,0,0,0,2,11,5,2,4,5,4,2,2,4,0,0,0,0,2,0,0,0,0,0,
0,0,0,0,8,0,71,79,79,71,0,64,0,0,255,255,8,141,253,168,0,0,8,141,2,88,0,0,
0,1,0,0,0,0,4,0,5,154,0,0,0,32,0,0,4,205,0,193,0,0,0,0,4,20,0,0,2,20,0,0,
6,94,0,137,6,94,0,137,5,147,0,137,6,6,0,162,6,203,0,70,4,162,0,137,7,227,
0,70,5,147,0,137,4,250,0,137,5,139,0,137,5,199,0,162,5,147,0,137,6,70,0,70,
4,117,0,137,4,248,0,92,4,152,0,92,6,152,0,137,6,168,0,115,6,190,0,115,7,113,
0,70,6,190,0,115,6,133,0,184,4,240,0,137,4,233,0,137,5,55,0,92,6,23,0,137,
5,53,0,137,5,80,0,184,3,20,0,150,6,6,0,162,4,45,0,162,6,180,0,92,5,127,0,
92,6,86,0,115,5,150,0,92,4,211,0,115,6,133,0,137,5,70,0,115,5,74,0,231,6,
109,0,115,6,6,0,162,7,70,0,184,4,80,0,231,5,147,0,137,5,147,0,137,4,244,0,
137,5,143,0,162,6,168,0,115,5,31,0,162,6,168,0,115,6,86,0,137,5,225,0,137,
5,84,0,137,6,168,0,115,4,240,0,137,0,0,0,2,0,3,0,1,0,0,0,20,0,3,0,10,0,0,
0,84,0,4,0,64,0,0,0,12,0,8,0,2,0,4,0,0,0,13,0,32,0,160,254,255,255,255,0,
0,0,0,0,13,0,32,0,160,254,255,255,255,0,1,255,245,255,227,255,99,1,2,0,1,
0,0,0,0,0,0,0,0,0,0,0,0,0,12,0,0,0,0,0,148,0,0,0,0,0,0,0,11,0,0,0,0,0,0,0,
0,0,0,0,1,0,0,0,13,0,0,0,13,0,0,0,2,0,0,0,32,0,0,0,32,0,0,0,3,0,0,0,160,0,
0,0,160,0,0,0,3,0,0,254,255,0,0,254,255,0,0,0,1,0,1,8,0,0,1,8,5,0,0,0,4,0,
1,8,8,0,1,8,8,0,0,0,10,0,1,8,10,0,1,8,53,0,0,0,11,0,1,8,55,0,1,8,56,0,0,0,
55,0,1,8,60,0,1,8,60,0,0,0,57,0,1,8,63,0,1,8,63,0,0,0,58,0,0,0,21,0,21,0,
21,0,21,0,118,0,225,1,20,1,63,1,100,1,146,1,198,1,244,2,40,2,81,2,102,2,167,
2,216,3,35,3,61,3,86,3,152,3,201,3,253,4,50,4,103,4,165,4,191,4,250,5,42,
5,95,5,131,5,167,5,212,5,249,6,36,6,104,6,154,6,189,6,230,7,30,7,98,7,129,
7,156,7,202,8,10,8,85,8,104,8,148,8,188,8,213,8,253,9,46,9,71,9,113,9,155,
9,214,10,3,10,53,10,137,0,2,0,193,0,0,4,10,5,182,0,3,0,7,0,0,19,33,17,33,
55,33,17,33,193,3,73,252,183,104,2,121,253,135,5,182,250,74,104,4,230,0,0,
1,0,137,0,0,5,211,5,182,0,56,0,0,33,17,52,55,39,6,6,7,1,39,1,54,54,55,53,
38,39,1,55,1,22,22,23,55,38,38,53,17,51,17,20,6,7,23,54,54,55,1,23,1,6,7,
21,22,22,23,1,7,1,38,38,39,7,22,22,21,17,2,223,21,8,20,108,42,254,170,93,
1,107,39,126,64,120,109,254,143,99,1,86,42,108,20,8,9,12,160,14,9,9,24,111,
37,1,84,98,254,145,111,118,59,129,41,1,105,92,254,172,41,106,25,9,9,14,1,
180,164,59,5,31,108,31,254,233,127,1,37,32,62,19,8,24,86,1,39,123,254,238,
33,111,28,4,26,128,69,1,141,254,115,59,138,26,4,32,112,28,1,18,123,254,217,
86,24,8,17,64,32,254,219,127,1,23,31,103,36,5,25,139,59,254,76,0,1,0,137,
0,0,5,211,5,182,0,65,0,0,1,54,51,51,21,35,34,39,21,22,22,23,23,7,1,38,38,
39,7,22,22,21,17,35,17,52,55,39,6,6,7,1,39,1,54,54,55,53,38,39,1,55,1,22,
22,23,55,38,38,53,17,51,17,20,6,7,23,54,54,55,1,23,5,6,6,7,3,156,165,199,
178,178,194,172,51,204,54,254,92,254,172,41,106,25,9,9,14,160,21,8,20,108,
42,254,170,93,1,107,39,126,64,120,109,254,143,99,1,86,42,108,20,8,9,12,160,
14,9,9,24,111,37,1,84,98,254,252,50,210,47,3,12,45,141,39,8,12,109,45,207,
127,1,23,31,103,36,5,25,139,59,254,76,1,180,164,59,5,31,108,31,254,233,127,
1,37,32,62,19,8,24,86,1,39,123,254,238,33,111,28,4,26,128,69,1,141,254,115,
59,138,26,4,32,112,28,1,18,123,209,41,112,8,0,1,0,137,255,236,5,8,5,182,0,
24,0,0,19,1,22,23,51,38,53,17,51,17,20,7,51,54,55,1,23,1,1,7,1,1,39,1,1,246,
1,14,88,47,8,24,160,25,8,59,74,1,15,106,254,66,1,188,110,254,51,254,55,111,
1,187,254,59,4,47,254,250,88,86,175,210,1,186,254,70,218,167,102,72,1,6,108,
254,69,254,82,110,1,192,254,64,112,1,172,1,189,0,0,2,0,162,0,0,5,100,5,207,
0,6,0,17,0,0,1,1,55,1,1,23,1,37,23,1,33,21,33,53,33,1,55,1,2,195,253,223,
125,1,223,1,235,123,253,226,1,163,123,253,191,1,196,252,56,1,200,253,187,
125,1,223,2,244,2,110,109,253,203,2,51,109,253,148,157,108,253,104,141,141,
2,154,108,253,201,0,0,1,0,70,0,0,6,133,5,182,0,14,0,0,33,17,1,1,39,1,51,1,
1,51,1,7,1,1,17,3,14,254,193,254,229,110,1,116,52,1,118,1,121,49,1,119,110,
254,231,254,176,3,182,1,64,254,229,107,1,112,254,137,1,119,254,144,107,1,
25,254,188,252,80,0,0,2,0,137,0,0,4,25,5,209,0,13,0,25,0,0,33,38,2,53,52,
18,54,51,50,18,17,20,2,7,1,20,18,23,54,18,53,52,38,35,34,6,2,41,201,215,106,
206,145,215,240,214,202,254,176,156,141,143,154,152,145,145,152,221,1,211,
236,172,1,0,137,254,215,254,244,235,254,45,222,3,156,206,254,125,163,165,
1,132,203,204,213,216,0,1,0,70,1,88,7,160,4,90,0,26,0,0,1,23,54,51,51,21,
33,53,51,50,23,55,38,39,3,1,35,1,55,1,1,51,1,1,23,1,6,5,207,6,83,140,107,
252,245,132,119,94,4,53,74,242,254,117,115,254,68,120,1,140,1,145,82,1,127,
1,129,115,254,178,91,1,231,10,10,143,143,10,10,42,92,1,43,254,55,2,39,100,
254,33,1,223,254,49,1,207,100,254,121,109,0,1,0,137,0,0,5,8,5,203,0,24,0,
0,33,33,53,33,17,52,55,35,6,7,1,39,1,51,1,7,1,38,39,35,23,22,21,17,33,4,156,
252,88,1,133,14,8,40,83,254,240,107,2,17,92,2,18,108,254,243,93,36,8,7,12,
1,131,141,2,248,176,187,73,79,254,248,108,2,15,253,239,106,1,8,93,59,80,145,
138,253,8,0,0,1,0,137,255,236,4,66,5,211,0,25,0,0,1,1,55,1,55,1,55,1,55,54,
53,52,39,39,55,23,22,21,20,7,1,5,7,37,1,39,1,229,254,164,96,1,89,139,254,
178,94,1,80,78,35,68,219,98,224,129,72,254,192,1,76,96,254,182,254,207,121,
1,221,1,0,127,254,252,186,1,0,125,254,250,103,43,41,55,51,166,127,172,102,
111,85,93,254,90,248,127,252,254,109,102,0,2,0,137,0,0,5,70,5,182,0,15,0,
19,0,0,33,33,53,51,17,1,55,1,1,51,1,7,39,1,17,51,17,33,53,33,3,141,253,183,
215,254,110,111,1,117,1,120,50,1,47,111,209,254,180,211,253,183,2,73,141,
2,74,1,147,113,254,139,1,119,254,217,106,207,254,194,253,176,4,156,141,0,
0,1,0,162,255,250,5,39,5,182,0,7,0,0,5,39,19,33,19,7,3,33,1,61,155,209,2,
227,209,158,188,254,45,6,12,5,176,250,80,12,5,45,0,2,0,137,0,0,5,8,5,203,
0,6,0,31,0,0,1,1,55,23,55,23,1,1,38,38,39,35,22,21,17,35,17,52,55,35,6,7,
1,39,1,1,55,1,1,23,1,1,2,158,254,239,99,219,217,96,254,242,1,166,173,178,
55,8,27,160,22,8,54,77,254,240,107,1,193,254,94,111,1,178,1,180,111,254,90,
1,194,4,98,1,8,95,203,205,97,254,248,252,142,169,175,92,199,184,254,219,1,
37,221,162,99,73,254,248,108,1,189,1,149,113,254,84,1,174,115,254,107,254,
65,0,0,1,0,70,1,88,6,2,4,88,0,25,0,0,1,23,54,51,51,21,33,53,51,50,23,55,38,
38,39,1,55,1,1,51,1,7,37,1,6,6,2,201,6,83,130,106,252,244,133,107,96,4,35,
56,54,254,129,110,1,219,1,222,49,1,100,111,254,250,254,185,48,43,1,231,10,
10,143,143,10,10,22,46,57,1,131,113,254,35,1,221,254,170,106,254,254,190,
46,38,0,3,0,137,255,236,3,236,5,199,0,27,0,37,0,48,0,0,1,20,6,6,35,34,38,
38,53,52,54,55,38,38,53,52,54,54,51,50,22,22,21,20,6,7,22,22,7,52,37,4,21,
20,22,51,50,54,3,52,38,35,34,6,21,20,22,23,54,3,236,111,201,121,122,201,111,
148,135,149,111,111,195,112,110,187,106,136,124,129,154,166,254,243,254,246,
146,118,122,149,21,141,105,102,145,126,119,248,1,123,121,181,97,99,180,120,
121,191,52,92,170,117,103,163,91,89,162,106,105,188,65,51,210,132,228,106,
101,233,113,133,131,3,96,94,121,120,93,102,155,60,124,0,0,2,0,92,0,0,4,111,
5,209,0,3,0,10,0,0,33,33,53,33,3,1,33,21,33,53,1,4,111,251,237,4,19,183,253,
103,3,80,251,237,2,223,141,4,234,252,112,143,143,3,234,0,0,1,0,92,0,0,4,59,
5,182,0,11,0,0,1,33,17,35,17,33,53,33,17,51,17,33,4,59,254,95,158,254,96,
1,160,158,1,161,2,223,253,33,2,223,142,2,73,253,183,0,0,2,0,137,255,244,6,
14,5,211,0,16,0,35,0,0,1,32,3,3,39,19,18,0,33,51,32,0,19,19,7,3,2,1,20,22,
22,51,50,54,54,53,51,20,2,6,35,35,34,38,2,53,3,63,254,26,26,22,160,25,15,
1,84,1,44,49,1,42,1,81,21,28,159,31,37,253,107,31,70,64,65,76,33,158,70,141,
106,21,107,142,68,5,66,253,43,253,143,8,2,105,1,164,1,194,254,60,254,87,253,
158,8,2,106,2,220,253,43,233,170,87,93,192,205,245,254,248,124,125,1,10,242,
0,0,3,0,115,255,246,6,53,5,203,0,6,0,13,0,20,0,0,23,39,1,1,55,1,21,51,53,
1,23,1,1,7,1,1,55,19,19,23,1,236,121,1,207,254,167,132,1,114,234,1,108,129,
254,178,1,205,121,253,111,254,209,123,227,221,133,254,209,10,98,2,141,2,0,
90,253,218,103,103,2,38,92,254,2,253,115,98,3,184,1,199,84,254,172,1,86,88,
254,59,0,2,0,115,255,236,6,74,5,207,0,11,0,25,0,0,1,1,23,1,1,7,1,1,39,1,1,
55,1,20,22,22,51,51,21,35,34,38,38,53,53,51,3,94,1,244,129,253,250,2,125,
129,253,149,253,150,129,2,125,253,249,129,2,62,31,74,83,37,37,144,144,60,
160,3,150,2,57,94,253,174,253,43,94,2,186,253,70,94,2,213,2,82,94,251,205,
121,102,44,145,69,164,173,59,0,0,1,0,70,1,88,7,45,4,88,0,27,0,0,1,23,54,51,
51,21,33,53,51,50,23,55,38,39,1,5,39,1,51,1,1,51,1,7,37,1,6,6,3,242,6,80,
133,106,252,244,133,107,96,4,67,78,254,206,254,244,106,1,102,51,1,219,1,222,
49,1,100,111,254,250,254,183,48,43,1,231,10,10,143,143,10,10,43,82,1,50,252,
104,1,86,254,35,1,221,254,170,106,254,254,190,46,38,0,3,0,115,1,39,6,74,4,
223,0,13,0,20,0,27,0,0,1,32,36,53,52,54,36,51,50,4,22,21,20,4,19,52,36,39,
17,54,36,37,20,4,23,17,6,4,3,94,254,165,254,112,172,1,90,229,229,1,91,172,
254,111,243,254,228,228,243,1,13,251,102,1,21,229,230,254,236,1,39,250,227,
144,212,119,118,213,144,227,250,1,221,144,179,11,253,96,19,178,141,142,182,
14,2,160,11,179,0,3,0,184,0,127,5,205,5,88,0,21,0,25,0,29,0,0,1,22,23,1,7,
1,1,39,1,54,55,53,38,39,1,55,1,1,23,0,6,7,5,35,17,51,1,35,17,51,3,168,75,
134,1,84,115,253,232,253,231,113,1,78,124,89,74,129,254,170,111,2,25,2,24,
111,254,154,133,54,2,33,158,158,251,143,158,158,2,231,42,132,254,179,109,
2,6,253,250,109,1,71,122,58,9,39,129,1,79,113,253,250,2,6,113,254,161,125,
27,215,1,161,254,95,1,161,0,2,0,137,0,0,4,102,5,182,0,7,0,11,0,0,1,33,17,
35,17,33,53,33,17,33,53,33,4,102,254,93,160,254,102,3,221,252,35,3,221,3,
152,252,104,3,152,141,1,4,141,0,0,3,0,137,255,236,4,96,5,223,0,3,0,7,0,33,
0,0,19,17,51,17,33,17,51,17,1,52,55,19,23,3,6,21,20,22,23,23,22,21,20,7,3,
39,19,54,53,52,38,39,39,38,137,156,2,160,155,253,41,31,180,148,174,19,40,
54,49,177,31,219,148,215,19,43,54,49,176,1,78,3,39,252,217,3,39,252,217,2,
106,65,68,1,162,53,254,109,32,44,37,54,22,20,77,153,60,73,254,17,53,1,225,
40,36,37,51,24,21,76,0,1,0,92,0,0,4,242,5,211,0,25,0,0,33,33,53,51,55,37,
55,1,19,1,55,5,55,54,53,52,39,39,55,23,22,21,20,7,1,33,4,242,251,108,178,
156,254,176,96,1,80,207,254,184,99,1,71,117,35,66,219,99,223,129,74,253,168,
3,25,141,201,254,125,255,0,1,14,1,0,125,254,148,43,41,55,49,166,127,172,102,
111,78,100,252,237,0,0,2,0,137,255,248,5,186,5,217,0,13,0,28,0,0,37,39,1,
54,53,52,39,39,55,5,22,21,20,7,37,50,23,5,7,39,38,35,34,7,1,39,1,54,54,1,
27,146,1,135,15,92,246,65,1,0,183,33,1,141,63,74,1,0,67,246,40,34,76,34,254,
129,146,1,135,36,129,109,63,3,129,32,32,75,39,107,143,111,78,151,69,68,110,
30,115,143,102,17,82,252,137,63,3,129,82,96,0,3,0,137,255,250,4,78,5,207,
0,6,0,10,0,14,0,0,1,21,1,39,1,1,55,1,17,51,17,3,17,51,17,3,74,253,194,121,
2,37,253,209,121,2,172,160,160,160,3,47,160,253,107,104,2,125,2,135,105,253,
92,2,139,253,117,252,213,2,139,253,117,0,0,1,0,184,0,0,4,152,5,182,0,19,0,
0,1,33,17,35,17,33,53,33,17,33,53,33,17,51,17,33,21,33,17,33,4,152,254,94,
158,254,96,1,160,254,96,1,160,158,1,162,254,94,1,162,2,14,253,242,2,14,142,
1,20,141,1,121,254,135,141,254,236,0,0,1,0,150,255,236,2,125,5,223,0,25,0,
0,19,52,55,19,23,3,6,21,20,22,23,23,22,21,20,7,3,39,19,54,53,52,38,39,39,
38,150,32,178,150,176,17,41,54,47,178,31,219,149,215,20,44,52,49,178,3,184,
58,75,1,162,53,254,109,36,40,37,51,25,20,79,151,64,69,254,17,53,1,225,43,
33,37,51,24,21,76,0,2,0,162,0,0,5,100,5,207,0,6,0,13,0,0,1,23,1,35,1,55,1,
3,1,55,1,1,23,1,4,233,123,253,191,60,253,187,125,1,223,59,253,223,125,1,223,
1,235,123,253,226,3,2,108,253,106,2,152,108,253,203,2,37,2,110,109,253,203,
2,51,109,253,148,0,1,0,162,255,236,3,233,5,203,0,24,0,0,1,38,38,53,52,54,
54,51,50,22,23,7,38,38,35,34,6,6,21,20,22,22,23,1,39,2,12,204,158,108,184,
107,128,198,114,90,93,180,79,57,106,66,61,149,197,254,178,149,2,129,101,201,
147,101,184,108,84,103,127,84,84,65,115,63,80,101,103,95,253,33,63,0,0,1,
0,92,1,10,6,90,4,233,0,39,0,0,1,20,7,23,54,55,1,39,55,1,21,1,6,7,23,54,51,
51,21,33,53,51,50,23,55,38,39,1,53,1,23,7,1,22,23,55,38,53,53,51,3,168,16,
8,31,98,1,127,232,109,1,53,254,14,100,98,6,44,243,135,252,28,207,165,48,6,
107,89,254,12,1,53,107,229,1,124,96,27,11,17,160,3,104,171,160,4,55,65,1,
11,215,118,254,222,97,254,164,68,40,11,11,148,148,11,11,46,62,1,92,97,1,34,
118,213,254,243,68,52,4,170,161,89,0,2,0,92,0,0,5,37,5,209,0,16,0,28,0,0,
51,53,33,38,2,53,52,18,54,51,50,18,17,16,1,33,21,1,20,18,23,54,18,53,52,38,
35,34,6,92,1,182,140,142,106,206,145,215,239,254,227,1,187,252,113,152,147,
144,155,152,147,146,153,141,189,1,142,196,172,1,0,137,254,214,254,245,254,
114,254,127,141,3,156,203,254,106,170,169,1,149,205,202,215,214,0,3,0,115,
0,0,5,225,5,203,0,3,0,10,0,14,0,0,1,51,17,35,1,1,39,1,51,1,7,37,51,17,35,
2,4,158,158,1,33,253,203,125,2,153,60,2,153,123,254,76,160,160,2,250,253,
6,4,252,253,106,109,2,248,253,8,109,148,253,6,0,0,1,0,92,255,244,5,80,5,211,
0,19,0,0,5,1,55,9,2,55,1,19,54,53,52,39,39,55,23,22,21,20,7,2,49,254,43,96,
1,86,1,58,254,174,94,1,80,221,35,66,219,101,223,129,74,12,1,90,127,254,252,
1,145,1,6,125,254,250,1,29,43,41,60,48,164,123,172,102,111,85,93,0,0,2,0,
115,255,233,4,96,5,223,0,22,0,32,0,0,55,54,55,38,2,53,52,54,54,51,50,22,22,
21,16,1,22,23,7,38,39,6,7,19,20,1,18,53,52,38,35,34,6,115,223,172,158,168,
105,188,121,120,189,105,254,211,202,207,88,219,205,202,199,131,1,20,242,137,
121,122,138,106,152,172,179,1,78,136,128,194,102,103,193,128,254,240,254,
145,202,132,129,140,209,217,132,4,78,223,254,199,1,28,252,128,141,140,0,3,
0,137,255,94,5,252,5,205,0,3,0,19,0,35,0,0,5,1,55,1,3,20,18,23,7,38,38,2,
53,52,18,54,55,23,6,2,5,52,2,39,55,22,22,18,21,20,2,6,7,39,54,18,4,61,254,
166,133,1,95,64,200,173,66,135,213,121,119,214,136,66,173,200,253,119,200,
173,66,135,214,120,120,213,136,66,173,200,162,2,8,91,253,243,3,47,222,254,
180,66,125,48,218,1,50,173,172,1,50,219,49,125,67,254,180,222,223,1,75,67,
125,49,217,254,205,173,172,254,205,216,50,125,67,1,76,0,0,1,0,115,0,0,4,211,
5,184,0,13,0,0,33,35,1,55,1,22,18,23,51,54,18,55,1,23,3,23,228,254,64,164,
1,28,41,66,8,10,12,66,37,1,20,156,5,135,49,252,150,122,254,249,78,86,1,2,
113,3,112,55,0,1,0,231,0,0,4,193,5,182,0,13,0,0,1,33,17,35,17,51,17,33,17,
51,17,51,17,51,4,193,252,198,160,160,1,2,160,248,160,3,152,252,104,5,182,
254,111,1,145,254,111,1,145,0,0,3,0,115,0,0,5,225,5,203,0,12,0,16,0,23,0,
0,1,20,22,51,51,21,35,34,38,38,53,53,51,1,33,53,33,1,1,39,1,51,1,7,3,117,
98,129,166,166,164,150,71,158,1,137,252,61,3,195,254,39,253,203,125,2,153,
60,2,153,123,3,45,176,143,150,89,204,172,141,252,74,141,4,111,253,106,109,
2,248,253,8,109,0,0,3,0,162,0,0,5,100,5,207,0,20,0,24,0,31,0,0,1,50,23,55,
38,39,1,55,1,1,23,1,6,7,23,54,51,51,21,33,53,5,21,33,53,1,1,55,1,1,23,1,2,
2,149,60,2,54,110,254,113,117,1,231,1,246,112,254,111,91,77,2,78,135,229,
252,56,3,200,252,56,1,164,253,227,121,1,223,1,235,115,253,234,1,94,12,6,26,
124,1,202,103,253,198,2,64,111,254,56,105,45,6,12,135,135,215,135,135,2,119,
2,104,105,253,203,2,51,103,253,152,0,2,0,184,255,248,6,211,5,205,0,27,0,43,
0,0,37,1,39,6,35,35,53,33,17,51,17,33,21,35,34,39,7,1,7,3,38,38,39,35,6,6,
7,3,1,52,2,39,55,22,22,18,21,20,2,6,7,39,54,18,3,117,1,41,4,48,165,164,1,
135,160,1,139,137,198,44,6,1,41,168,154,16,44,3,8,3,38,25,151,254,18,201,
170,64,136,215,120,120,216,135,64,171,200,12,3,43,11,11,142,1,241,254,15,
142,11,11,252,213,20,1,176,47,174,29,31,149,72,254,82,2,235,226,1,73,66,125,
49,218,254,205,172,172,254,206,219,48,125,66,1,74,0,1,0,231,0,0,3,244,5,182,
0,7,0,0,1,33,17,35,17,51,17,33,3,244,253,147,160,160,2,109,2,223,253,33,5,
182,253,183,0,1,0,137,0,0,5,8,5,182,0,23,0,0,19,1,22,23,51,38,53,17,51,17,
20,7,51,54,55,1,23,1,33,21,33,53,33,1,244,1,16,64,59,8,14,160,19,8,65,64,
1,13,108,253,217,1,187,252,88,1,190,253,215,3,33,254,248,63,112,189,197,2,
202,253,54,194,192,110,65,1,8,107,253,215,141,141,2,39,0,1,0,137,0,0,5,8,
5,203,0,20,0,0,19,1,51,1,7,1,38,39,35,23,22,21,17,35,17,52,55,35,6,7,1,137,
2,17,92,2,18,108,254,243,93,36,8,7,12,160,14,8,40,83,254,240,3,188,2,15,253,
239,106,1,8,93,59,80,145,138,252,123,3,133,176,187,73,79,254,248,0,1,0,137,
0,0,4,106,5,182,0,11,0,0,1,33,17,35,17,33,53,33,21,33,17,33,4,2,254,88,160,
254,207,3,225,253,240,1,168,3,68,252,188,5,41,141,141,254,168,0,0,3,0,162,
255,250,4,193,5,182,0,11,0,15,0,19,0,0,1,33,21,33,3,39,19,33,53,33,21,33,
1,17,51,17,37,17,51,17,2,61,2,132,253,104,121,160,191,254,211,4,31,253,176,
1,176,160,254,59,160,3,209,141,252,182,12,5,35,141,141,250,215,2,139,253,
117,145,1,250,254,6,0,3,0,115,255,246,6,53,5,227,0,6,0,13,0,20,0,0,23,39,
1,1,55,1,21,51,53,1,23,1,1,7,1,1,7,3,3,39,1,236,121,1,207,254,59,131,1,223,
234,1,225,129,254,61,1,205,121,253,209,1,47,125,227,221,131,1,47,10,98,2,
141,2,154,90,253,64,103,103,2,202,100,253,102,253,115,98,2,35,254,57,84,1,
84,254,170,88,1,197,0,1,0,162,0,0,4,125,5,182,0,11,0,0,1,33,17,33,21,33,53,
33,17,33,53,33,4,125,254,92,1,164,252,37,1,151,254,105,3,219,5,41,251,100,
141,141,4,156,141,0,0,3,0,115,255,246,6,53,5,182,0,3,0,10,0,17,0,0,1,17,51,
17,1,39,1,1,55,1,21,51,53,1,23,1,1,7,3,10,160,253,66,121,1,207,254,167,132,
1,114,234,1,108,129,254,178,1,205,121,3,252,1,186,254,70,251,250,98,2,141,
2,0,90,253,218,103,103,2,38,100,254,10,253,115,98,0,2,0,137,0,0,5,250,5,203,
0,13,0,20,0,0,1,51,21,16,2,4,35,35,53,51,50,54,18,17,19,1,39,1,51,1,7,3,4,
158,120,254,249,240,63,63,194,190,81,55,253,205,127,2,156,57,2,156,125,3,
182,141,254,206,254,166,157,147,111,1,7,1,36,1,207,253,106,109,2,248,253,
8,109,0,0,2,0,137,255,250,5,88,5,205,0,15,0,31,0,0,1,20,18,23,7,38,38,2,53,
52,18,54,55,23,6,2,5,52,2,39,55,22,22,18,21,20,2,6,7,39,54,18,3,229,200,171,
65,135,213,121,119,214,136,65,171,200,254,25,200,173,66,135,214,120,120,213,
136,66,173,200,2,227,224,254,183,67,125,48,218,1,50,173,172,1,50,219,49,125,
66,254,182,225,223,1,75,67,125,49,217,254,205,173,172,254,205,216,50,125,
67,1,76,0,0,2,0,137,255,250,4,109,5,205,0,7,0,23,0,0,1,33,17,51,17,35,17,
33,37,20,18,23,7,38,38,2,53,52,18,54,55,23,6,2,2,49,1,156,160,160,254,100,
254,252,200,171,64,135,215,121,119,216,136,64,171,200,3,109,2,73,250,74,2,
223,4,222,254,181,67,125,48,218,1,49,174,172,1,50,219,49,125,67,254,182,0,
4,0,115,255,246,6,53,5,205,0,3,0,7,0,14,0,21,0,0,1,23,7,39,7,23,7,39,1,39,
1,1,55,1,21,51,53,1,23,1,1,7,3,246,200,106,201,63,200,108,199,254,11,121,
1,207,254,167,132,1,114,234,1,108,129,254,178,1,205,121,5,205,232,96,234,
58,231,96,233,251,31,98,2,141,2,0,90,253,218,103,103,2,38,100,254,10,253,
115,98,0,0,2,0,137,255,236,4,102,5,223,0,25,0,51,0,0,19,52,55,19,23,3,6,21,
20,22,23,23,22,21,20,7,3,39,19,54,53,52,38,39,39,38,37,52,55,19,23,3,6,21,
20,22,23,23,22,21,20,7,3,39,19,54,53,52,38,39,39,38,137,33,178,150,176,17,
41,53,47,179,31,219,150,215,19,43,54,47,178,1,246,31,180,149,176,16,40,54,
47,178,32,220,147,215,19,43,54,47,178,3,184,56,77,1,162,53,254,109,36,40,
37,51,25,20,78,152,60,73,254,17,53,1,225,40,36,37,51,24,21,77,152,65,68,1,
162,53,254,109,34,42,37,51,25,20,78,152,58,75,254,17,53,1,225,40,36,37,51,
24,21,76,0,0,0,0,0,15,0,186,0,3,0,1,4,9,0,0,0,94,0,0,0,3,0,1,4,9,0,1,0,34,
0,94,0,3,0,1,4,9,0,2,0,14,0,128,0,3,0,1,4,9,0,3,0,72,0,142,0,3,0,1,4,9,0,
4,0,34,0,94,0,3,0,1,4,9,0,5,0,30,0,214,0,3,0,1,4,9,0,6,0,30,0,244,0,3,0,1,
4,9,0,7,0,68,1,18,0,3,0,1,4,9,0,8,0,42,1,86,0,3,0,1,4,9,0,9,0,40,1,128,0,
3,0,1,4,9,0,10,0,96,1,168,0,3,0,1,4,9,0,11,0,62,2,8,0,3,0,1,4,9,0,12,0,60,
2,70,0,3,0,1,4,9,0,13,2,150,2,130,0,3,0,1,4,9,0,14,0,52,5,24,0,67,0,111,0,
112,0,121,0,114,0,105,0,103,0,104,0,116,0,32,0,50,0,48,0,49,0,50,0,32,0,71,
0,111,0,111,0,103,0,108,0,101,0,32,0,73,0,110,0,99,0,46,0,32,0,65,0,108,0,
108,0,32,0,82,0,105,0,103,0,104,0,116,0,115,0,32,0,82,0,101,0,115,0,101,0,
114,0,118,0,101,0,100,0,46,0,78,0,111,0,116,0,111,0,32,0,83,0,97,0,110,0,
115,0,32,0,67,0,121,0,112,0,114,0,105,0,111,0,116,0,82,0,101,0,103,0,117,
0,108,0,97,0,114,0,77,0,111,0,110,0,111,0,116,0,121,0,112,0,101,0,32,0,73,
0,109,0,97,0,103,0,105,0,110,0,103,0,32,0,45,0,32,0,78,0,111,0,116,0,111,
0,32,0,83,0,97,0,110,0,115,0,32,0,67,0,121,0,112,0,114,0,105,0,111,0,116,
0,86,0,101,0,114,0,115,0,105,0,111,0,110,0,32,0,49,0,46,0,48,0,51,0,32,0,
117,0,104,0,78,0,111,0,116,0,111,0,83,0,97,0,110,0,115,0,67,0,121,0,112,0,
114,0,105,0,111,0,116,0,78,0,111,0,116,0,111,0,32,0,105,0,115,0,32,0,97,0,
32,0,116,0,114,0,97,0,100,0,101,0,109,0,97,0,114,0,107,0,32,0,111,0,102,0,
32,0,71,0,111,0,111,0,103,0,108,0,101,0,32,0,73,0,110,0,99,0,46,0,77,0,111,
0,110,0,111,0,116,0,121,0,112,0,101,0,32,0,73,0,109,0,97,0,103,0,105,0,110,
0,103,0,32,0,73,0,110,0,99,0,46,0,77,0,111,0,110,0,111,0,116,0,121,0,112,
0,101,0,32,0,68,0,101,0,115,0,105,0,103,0,110,0,32,0,84,0,101,0,97,0,109,
0,68,0,97,0,116,0,97,0,32,0,117,0,110,0,104,0,105,0,110,0,116,0,101,0,100,
0,46,0,32,0,68,0,101,0,115,0,105,0,103,0,110,0,101,0,100,0,32,0,98,0,121,
0,32,0,77,0,111,0,110,0,111,0,116,0,121,0,112,0,101,0,32,0,100,0,101,0,115,
0,105,0,103,0,110,0,32,0,116,0,101,0,97,0,109,0,46,0,104,0,116,0,116,0,112,
0,58,0,47,0,47,0,119,0,119,0,119,0,46,0,103,0,111,0,111,0,103,0,108,0,101,
0,46,0,99,0,111,0,109,0,47,0,103,0,101,0,116,0,47,0,110,0,111,0,116,0,111,
0,47,0,104,0,116,0,116,0,112,0,58,0,47,0,47,0,119,0,119,0,119,0,46,0,109,
0,111,0,110,0,111,0,116,0,121,0,112,0,101,0,46,0,99,0,111,0,109,0,47,0,115,
0,116,0,117,0,100,0,105,0,111,0,84,0,104,0,105,0,115,0,32,0,70,0,111,0,110,
0,116,0,32,0,83,0,111,0,102,0,116,0,119,0,97,0,114,0,101,0,32,0,105,0,115,
0,32,0,108,0,105,0,99,0,101,0,110,0,115,0,101,0,100,0,32,0,117,0,110,0,100,
0,101,0,114,0,32,0,116,0,104,0,101,0,32,0,83,0,73,0,76,0,32,0,79,0,112,0,
101,0,110,0,32,0,70,0,111,0,110,0,116,0,32,0,76,0,105,0,99,0,101,0,110,0,
115,0,101,0,44,0,32,0,86,0,101,0,114,0,115,0,105,0,111,0,110,0,32,0,49,0,
46,0,49,0,46,0,32,0,84,0,104,0,105,0,115,0,32,0,70,0,111,0,110,0,116,0,32,
0,83,0,111,0,102,0,116,0,119,0,97,0,114,0,101,0,32,0,105,0,115,0,32,0,100,
0,105,0,115,0,116,0,114,0,105,0,98,0,117,0,116,0,101,0,100,0,32,0,111,0,110,
0,32,0,97,0,110,0,32,0,34,0,65,0,83,0,32,0,73,0,83,0,34,0,32,0,66,0,65,0,
83,0,73,0,83,0,44,0,32,0,87,0,73,0,84,0,72,0,79,0,85,0,84,0,32,0,87,0,65,
0,82,0,82,0,65,0,78,0,84,0,73,0,69,0,83,0,32,0,79,0,82,0,32,0,67,0,79,0,78,
0,68,0,73,0,84,0,73,0,79,0,78,0,83,0,32,0,79,0,70,0,32,0,65,0,78,0,89,0,32,
0,75,0,73,0,78,0,68,0,44,0,32,0,101,0,105,0,116,0,104,0,101,0,114,0,32,0,
101,0,120,0,112,0,114,0,101,0,115,0,115,0,32,0,111,0,114,0,32,0,105,0,109,
0,112,0,108,0,105,0,101,0,100,0,46,0,32,0,83,0,101,0,101,0,32,0,116,0,104,
0,101,0,32,0,83,0,73,0,76,0,32,0,79,0,112,0,101,0,110,0,32,0,70,0,111,0,110,
0,116,0,32,0,76,0,105,0,99,0,101,0,110,0,115,0,101,0,32,0,102,0,111,0,114,
0,32,0,116,0,104,0,101,0,32,0,115,0,112,0,101,0,99,0,105,0,102,0,105,0,99,
0,32,0,108,0,97,0,110,0,103,0,117,0,97,0,103,0,101,0,44,0,32,0,112,0,101,
0,114,0,109,0,105,0,115,0,115,0,105,0,111,0,110,0,115,0,32,0,97,0,110,0,100,
0,32,0,108,0,105,0,109,0,105,0,116,0,97,0,116,0,105,0,111,0,110,0,115,0,32,
0,103,0,111,0,118,0,101,0,114,0,110,0,105,0,110,0,103,0,32,0,121,0,111,0,
117,0,114,0,32,0,117,0,115,0,101,0,32,0,111,0,102,0,32,0,116,0,104,0,105,
0,115,0,32,0,70,0,111,0,110,0,116,0,32,0,83,0,111,0,102,0,116,0,119,0,97,
0,114,0,101,0,46,0,104,0,116,0,116,0,112,0,58,0,47,0,47,0,115,0,99,0,114,
0,105,0,112,0,116,0,115,0,46,0,115,0,105,0,108,0,46,0,111,0,114,0,103,0,47,
0,79,0,70,0,76,0,0,0,3,0,0,0,0,0,0,255,102,0,102,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,2,0,8,0,2,255,255,0,3,0};
#endif
