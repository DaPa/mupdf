#ifndef __STRICT_ANSI__
#if defined(__linux__) || defined(__FreeBSD__) || defined(__OpenBSD__)
#if !defined(__ICC) && !defined(__ANDROID__)
#define HAVE_INCBIN
#endif
#endif
#endif

#ifdef HAVE_INCBIN
const int fz_resources_fonts_noto_NotoSansTagalog_Regular_ttf_size = 5652;
extern const char fz_resources_fonts_noto_NotoSansTagalog_Regular_ttf[];
asm(".section .rodata");
asm(".global fz_resources_fonts_noto_NotoSansTagalog_Regular_ttf");
asm(".type fz_resources_fonts_noto_NotoSansTagalog_Regular_ttf STT_OBJECT");
asm(".size fz_resources_fonts_noto_NotoSansTagalog_Regular_ttf, 5652");
asm(".balign 64");
asm("fz_resources_fonts_noto_NotoSansTagalog_Regular_ttf:");
asm(".incbin \"resources/fonts/noto/NotoSansTagalog-Regular.ttf\"");
#else
const int fz_resources_fonts_noto_NotoSansTagalog_Regular_ttf_size = 5652;
const char fz_resources_fonts_noto_NotoSansTagalog_Regular_ttf[] = {
0,1,0,0,0,14,0,128,0,3,0,96,71,68,69,70,0,98,0,77,0,0,20,124,0,0,0,42,71,
80,79,83,247,215,251,56,0,0,20,168,0,0,1,74,71,83,85,66,68,116,76,117,0,0,
21,244,0,0,0,30,79,83,47,50,122,231,108,9,0,0,1,104,0,0,0,96,99,109,97,112,
255,100,70,141,0,0,2,48,0,0,0,100,103,97,115,112,0,7,0,7,0,0,20,112,0,0,0,
12,103,108,121,102,199,36,109,244,0,0,2,204,0,0,11,122,104,101,97,100,4,95,
106,170,0,0,0,236,0,0,0,54,104,104,101,97,14,79,6,51,0,0,1,36,0,0,0,36,104,
109,116,120,144,160,2,153,0,0,1,200,0,0,0,104,108,111,99,97,40,240,38,5,0,
0,2,148,0,0,0,54,109,97,120,112,0,33,0,104,0,0,1,72,0,0,0,32,110,97,109,101,
140,246,185,71,0,0,14,72,0,0,6,6,112,111,115,116,255,105,0,102,0,0,20,80,
0,0,0,32,0,1,0,0,0,1,7,174,186,129,62,24,95,15,60,245,0,11,8,0,0,0,0,0,205,
19,38,225,0,0,0,0,210,109,241,213,253,76,254,195,8,115,6,133,0,0,0,9,0,2,
0,0,0,0,0,0,0,1,0,0,8,141,253,168,0,0,8,143,253,76,255,225,8,115,0,1,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,26,0,1,0,0,0,26,0,94,0,2,0,8,0,2,0,1,0,0,0,0,0,
0,0,0,0,0,0,0,0,2,0,1,0,4,6,146,1,144,0,5,0,0,5,154,5,51,0,0,1,31,5,154,5,
51,0,0,3,209,0,102,2,0,0,0,2,11,5,2,4,5,4,2,2,4,0,0,0,0,0,0,0,0,0,16,0,0,
0,0,0,0,71,79,79,71,0,64,0,0,254,255,8,141,253,168,0,0,8,141,2,88,0,0,0,1,
0,0,0,0,4,0,5,154,0,0,0,32,0,1,4,205,0,193,0,0,0,0,4,20,0,0,2,20,0,0,8,29,
0,172,8,23,0,66,4,72,0,98,7,223,0,104,6,178,0,98,8,23,0,106,7,205,0,139,8,
98,0,104,6,205,0,152,8,143,0,119,6,207,0,131,8,61,0,119,8,59,0,119,7,78,0,
57,6,23,0,119,7,96,0,39,8,100,0,106,0,0,254,61,0,0,254,205,0,0,253,76,2,162,
0,37,3,231,0,37,0,0,0,1,0,3,0,1,0,0,0,12,0,4,0,88,0,0,0,18,0,16,0,3,0,2,0,
0,0,13,0,32,0,160,23,12,23,20,23,54,254,255,255,255,0,0,0,0,0,13,0,32,0,160,
23,0,23,14,23,53,254,255,255,255,0,1,255,245,255,227,255,99,233,4,233,3,232,
227,1,2,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,21,0,21,0,21,0,21,0,
103,0,192,0,251,1,78,1,166,2,14,2,64,2,147,3,26,3,101,3,167,3,246,4,71,4,
174,4,237,5,56,5,96,5,119,5,141,5,162,5,177,5,189,0,0,0,2,0,193,0,0,4,10,
5,182,0,3,0,7,0,0,19,33,17,33,55,33,17,33,193,3,73,252,183,104,2,121,253,
135,5,182,250,74,104,4,230,0,0,1,0,172,0,0,8,20,6,59,0,54,0,0,1,21,20,14,
2,21,20,51,50,62,2,55,55,54,54,51,50,22,23,7,38,35,34,6,7,3,2,4,35,34,38,
53,52,55,55,33,53,33,54,53,33,53,33,38,38,39,55,30,2,23,33,21,2,129,29,36,
29,117,49,104,109,138,153,94,138,193,127,107,152,40,129,48,126,72,119,71,
237,173,254,221,151,118,144,45,21,254,229,1,49,8,254,199,1,43,27,135,125,
33,143,149,95,23,1,45,4,37,29,86,187,179,161,59,221,59,111,192,253,155,229,
160,109,97,56,123,99,116,254,116,254,218,254,189,155,129,197,98,139,61,93,
139,103,123,32,137,48,100,144,103,139,0,0,2,0,66,0,160,7,211,4,162,0,34,0,
57,0,0,37,34,39,55,22,51,50,54,55,51,22,23,54,54,55,51,22,22,51,50,54,55,
23,6,6,35,34,38,39,6,7,38,39,6,6,19,34,38,39,55,22,22,51,50,37,36,51,50,22,
23,7,38,38,35,34,7,6,6,1,113,182,115,73,82,142,146,215,52,95,41,81,47,118,
26,94,37,190,136,55,81,62,66,89,107,66,139,214,86,124,113,93,49,81,240,70,
138,235,141,77,128,189,124,190,1,14,1,8,177,138,236,144,86,129,204,126,112,
174,253,239,160,73,119,53,229,213,177,105,34,181,67,206,236,24,35,122,47,
29,155,177,164,70,108,103,149,160,2,198,85,104,115,92,72,90,86,85,104,110,
95,65,54,79,44,0,1,0,98,0,0,3,229,5,18,0,40,0,0,19,54,54,51,50,22,21,20,7,
22,22,21,20,4,35,34,38,39,55,22,22,51,50,54,54,53,52,38,35,35,53,51,50,54,
53,52,38,35,34,6,7,221,87,154,116,180,200,180,98,121,254,237,224,110,187,
103,52,59,194,93,105,155,86,146,149,141,94,135,166,125,107,72,159,59,4,199,
40,35,158,139,191,81,27,170,116,193,223,30,38,133,27,35,72,127,76,106,117,
139,120,97,79,87,36,29,0,1,0,104,0,43,7,119,4,215,0,53,0,0,1,50,22,23,7,38,
38,35,34,6,7,5,6,35,34,38,39,55,22,22,51,50,55,55,17,7,6,35,34,38,39,55,22,
22,51,50,55,37,54,54,51,50,22,23,7,38,38,35,34,7,7,17,55,54,5,242,106,178,
105,64,99,137,81,51,138,36,253,229,122,126,110,188,116,91,78,153,96,98,91,
229,174,122,126,110,188,116,91,78,153,96,98,91,2,26,61,151,61,106,178,105,
64,99,137,81,94,131,207,151,154,1,254,47,55,125,51,37,35,17,225,51,75,99,
109,75,69,39,96,2,66,72,51,75,99,109,75,69,39,226,26,37,47,55,125,51,37,51,
88,253,190,63,64,0,0,1,0,98,0,0,6,125,5,18,0,63,0,0,19,54,54,51,50,23,54,
51,50,22,17,17,20,22,22,51,21,35,34,38,38,53,17,52,38,35,34,7,22,21,20,7,
22,22,21,20,4,35,34,38,39,55,22,22,51,50,54,54,53,52,38,35,35,53,51,50,54,
53,52,38,35,34,6,7,221,87,154,116,216,99,93,112,163,146,45,106,103,21,144,
170,77,76,94,59,68,6,180,98,121,254,237,224,110,187,103,52,59,194,93,105,
155,86,146,149,141,94,135,166,125,107,72,159,59,4,199,40,35,114,55,245,254,
237,254,217,136,103,46,139,86,170,168,1,39,202,179,35,32,32,191,81,27,170,
116,193,223,30,38,133,27,35,72,127,76,106,117,139,120,97,79,87,36,29,0,1,
0,106,0,0,7,168,5,33,0,75,0,0,1,50,54,55,54,54,51,50,22,21,20,6,7,39,54,54,
53,52,38,35,34,6,7,6,6,35,14,2,35,34,39,38,35,34,6,21,20,23,35,38,53,52,54,
51,50,23,22,51,50,17,52,38,35,34,7,6,35,34,38,53,52,54,55,23,6,6,21,20,51,
50,55,54,51,50,22,4,49,83,112,67,87,131,79,149,179,231,203,35,153,168,102,
78,58,85,53,80,175,108,10,108,172,103,93,86,86,48,41,37,18,145,21,119,100,
74,90,89,57,245,106,117,92,90,91,89,106,118,93,131,78,101,53,94,39,78,103,
112,171,204,2,154,51,63,78,60,187,151,178,248,37,131,36,173,125,87,109,45,
55,80,72,118,181,96,22,21,49,35,43,47,53,62,87,111,21,22,1,64,157,160,46,
46,113,98,72,126,89,117,65,63,38,76,39,54,197,0,0,1,0,139,0,0,7,139,5,12,
0,28,0,0,33,18,19,6,35,34,38,53,52,55,23,6,21,20,51,50,37,0,33,50,23,7,38,
35,34,4,0,2,7,1,35,36,169,81,71,94,111,66,106,32,75,144,1,8,1,130,1,189,192,
146,59,123,156,186,254,116,254,196,206,36,1,52,1,32,37,107,88,94,74,91,38,
33,62,240,1,98,67,127,55,176,254,204,254,93,250,0,0,1,0,104,0,164,7,250,4,
162,0,54,0,0,1,50,54,55,54,54,51,50,22,23,7,38,38,35,34,7,6,4,6,35,34,38,
53,52,54,55,38,39,55,22,22,51,50,37,36,51,50,22,23,7,38,38,35,34,7,6,6,35,
34,39,6,6,21,20,22,2,84,113,223,147,185,179,81,138,242,138,86,127,199,133,
112,169,98,254,243,177,78,184,217,104,76,135,134,78,128,189,124,190,1,14,
1,8,177,138,240,140,86,129,204,126,112,174,253,239,101,44,42,79,103,123,1,
47,41,45,54,32,87,101,111,94,66,52,30,70,20,193,157,125,200,70,50,100,115,
92,72,90,86,86,103,110,95,65,54,79,44,4,56,181,119,98,117,0,0,1,0,152,255,
121,6,55,5,18,0,93,0,0,1,6,2,17,20,22,23,35,38,17,52,18,36,51,50,4,18,21,
16,7,35,54,54,53,52,2,38,39,21,20,23,23,22,21,20,6,7,6,21,20,23,30,2,21,20,
6,7,6,6,21,20,23,22,22,21,20,6,7,6,7,39,54,55,54,53,52,39,39,38,38,53,52,
54,54,55,54,53,52,39,39,38,53,52,62,2,55,54,53,52,39,38,53,2,254,210,247,
34,38,164,65,178,1,82,202,202,1,83,180,67,164,38,34,132,239,156,64,49,47,
68,77,31,53,71,51,30,59,81,24,41,18,89,98,67,50,106,68,131,65,135,33,37,53,
47,45,51,73,39,19,37,53,92,18,33,46,45,40,20,119,4,123,48,254,135,254,239,
136,196,117,181,1,9,247,1,126,223,222,254,127,245,254,253,187,117,193,139,
188,1,66,187,11,12,77,55,46,38,46,39,70,43,16,6,7,22,28,33,40,26,31,65,47,
16,22,5,5,6,33,65,45,47,74,35,73,119,69,128,92,22,17,15,15,21,18,59,44,35,
64,41,21,8,7,8,16,22,36,84,24,38,32,30,27,21,6,7,13,81,155,0,1,0,119,0,0,
8,115,5,18,0,49,0,0,1,20,22,51,50,36,19,19,54,54,51,50,22,23,7,38,35,34,6,
7,7,22,22,23,7,38,39,14,4,35,34,38,53,52,55,54,53,33,53,33,50,22,21,20,7,
6,6,2,43,66,59,129,1,14,202,192,96,177,118,106,152,41,129,47,132,72,115,71,
69,50,136,31,129,90,80,149,158,136,136,129,68,131,142,49,13,254,172,1,33,
109,99,26,24,11,1,39,75,81,246,1,65,1,46,156,134,109,97,56,123,98,117,117,
63,216,67,67,174,108,239,205,131,83,38,160,149,108,220,57,72,139,73,87,61,
111,107,114,0,2,0,131,0,0,6,76,5,18,0,20,0,41,0,0,1,22,22,51,50,54,54,53,
52,2,38,35,34,4,2,21,20,22,51,50,54,23,6,35,34,38,53,52,18,18,36,51,50,4,
18,21,20,6,6,35,34,38,3,125,59,116,75,92,141,78,141,218,126,175,254,203,196,
113,98,96,191,77,169,206,166,192,134,236,1,53,167,161,1,35,183,116,207,132,
91,134,1,96,118,95,111,192,113,157,1,34,157,213,254,134,203,103,123,97,95,
141,205,182,158,1,80,1,14,147,200,254,157,190,161,254,138,58,0,2,0,119,0,
0,8,20,5,18,0,37,0,50,0,0,1,33,53,33,50,22,22,21,20,7,54,54,51,50,23,55,54,
54,51,50,22,23,7,38,35,34,6,7,3,2,4,35,34,38,53,52,55,54,5,34,7,6,6,21,20,
22,51,50,54,19,38,1,188,254,187,1,6,98,84,39,8,52,153,63,183,172,161,100,
176,115,107,152,40,129,48,130,70,116,72,238,175,254,228,142,126,149,32,23,
1,156,144,145,12,8,67,50,93,223,165,135,3,121,139,27,64,58,45,37,16,21,80,
254,160,130,109,97,56,123,97,118,254,116,254,217,253,221,185,156,163,121,
152,49,61,113,70,110,152,221,1,19,59,0,0,1,0,119,0,0,8,90,5,18,0,54,0,0,1,
52,55,54,53,33,53,33,50,22,21,20,7,6,6,21,20,51,50,54,18,19,62,3,51,50,22,
21,20,6,6,35,34,39,55,22,51,50,54,53,52,38,35,34,6,6,7,2,0,4,35,34,38,1,141,
49,13,254,172,1,33,109,99,26,24,11,131,90,199,228,183,56,93,103,127,90,121,
162,76,137,92,120,91,57,65,83,70,94,80,64,55,91,92,91,184,254,238,255,0,126,
137,144,1,53,108,220,57,72,139,73,87,61,111,107,114,57,156,139,1,39,1,58,
94,153,106,58,151,115,82,138,77,43,127,31,90,68,55,72,58,117,163,254,191,
254,171,159,158,0,0,1,0,57,255,236,7,4,5,23,0,70,0,0,1,52,55,6,6,35,34,38,
39,55,22,22,51,50,54,55,54,54,51,50,22,23,7,38,38,35,34,6,6,21,20,22,22,23,
22,22,21,20,7,6,6,21,20,22,23,22,21,20,6,7,6,7,39,54,55,54,53,52,39,39,38,
53,52,54,55,54,53,52,38,39,38,3,37,43,125,178,74,110,188,116,93,81,156,88,
78,233,111,149,248,113,102,174,113,63,92,144,82,133,210,118,12,23,55,59,60,
91,52,37,75,35,91,60,51,105,73,127,84,127,20,36,52,94,58,81,19,18,19,133,
3,33,93,75,58,45,75,99,111,78,67,83,60,78,76,44,59,125,50,38,87,154,93,17,
24,19,24,23,53,42,52,52,29,28,9,6,33,14,37,60,47,65,35,65,115,67,149,76,13,
8,10,12,21,34,81,41,73,37,8,6,7,8,8,51,0,1,0,119,0,0,5,180,5,100,0,40,0,0,
1,52,55,54,53,33,53,33,50,22,21,20,7,6,6,21,20,22,51,50,0,18,53,52,38,35,
34,6,7,39,54,51,50,22,21,20,2,0,35,34,38,1,141,49,13,254,172,1,33,109,99,
26,24,11,89,87,127,1,16,173,127,123,85,143,51,104,146,247,190,207,228,254,
168,169,153,169,1,55,106,220,57,72,139,73,87,61,111,105,97,45,99,88,1,4,1,
139,171,135,141,74,65,90,188,216,203,217,254,49,254,231,164,0,0,1,0,39,255,
236,6,254,5,18,0,50,0,0,33,35,3,33,53,33,50,22,22,21,19,51,18,18,54,54,51,
50,22,21,20,7,22,22,21,20,4,33,35,53,51,32,54,53,52,38,35,35,53,51,50,54,
53,52,38,35,34,3,6,3,2,1,236,138,4,254,201,1,6,82,88,37,4,4,133,245,179,205,
119,162,192,180,95,124,254,184,254,183,84,65,1,10,252,149,133,152,94,136,
165,112,101,197,179,87,156,203,4,135,139,29,63,80,252,207,1,20,1,166,194,
97,172,139,216,81,26,165,106,208,205,139,136,138,98,107,139,124,106,92,100,
254,244,129,254,230,254,145,0,1,0,106,1,227,7,252,3,31,0,22,0,0,1,34,38,39,
55,22,22,51,50,37,36,51,50,22,23,7,38,38,35,34,7,6,6,2,109,140,240,135,78,
124,193,124,190,1,14,1,8,177,138,240,140,86,123,201,135,116,170,253,239,1,
227,88,101,114,89,74,90,86,86,103,110,91,68,53,79,44,0,1,254,61,5,160,255,
16,6,133,0,11,0,0,1,52,54,51,50,22,21,20,6,35,34,38,254,61,62,45,48,56,59,
45,45,62,6,18,60,55,62,53,53,61,56,0,0,1,254,205,254,229,255,160,255,203,
0,11,0,0,5,52,54,51,50,22,21,20,6,35,34,38,254,205,61,45,42,63,63,42,45,61,
168,60,55,55,60,59,56,56,0,1,253,76,254,195,254,125,255,244,0,11,0,0,1,53,
35,53,51,53,51,21,51,21,35,21,253,178,102,102,103,100,100,254,195,100,102,
103,103,102,100,0,0,1,0,37,254,227,2,86,6,0,0,3,0,0,19,1,51,1,37,1,162,143,
254,92,254,227,7,29,248,227,255,255,0,37,254,227,3,156,6,0,0,38,0,24,0,0,
0,7,0,24,1,70,0,0,0,0,0,0,0,15,0,186,0,3,0,1,4,9,0,0,0,94,0,0,0,3,0,1,4,9,
0,1,0,34,0,94,0,3,0,1,4,9,0,2,0,14,0,128,0,3,0,1,4,9,0,3,0,72,0,142,0,3,0,
1,4,9,0,4,0,34,0,94,0,3,0,1,4,9,0,5,0,30,0,214,0,3,0,1,4,9,0,6,0,30,0,244,
0,3,0,1,4,9,0,7,0,68,1,18,0,3,0,1,4,9,0,8,0,42,1,86,0,3,0,1,4,9,0,9,0,40,
1,128,0,3,0,1,4,9,0,10,0,96,1,168,0,3,0,1,4,9,0,11,0,62,2,8,0,3,0,1,4,9,0,
12,0,60,2,70,0,3,0,1,4,9,0,13,2,150,2,130,0,3,0,1,4,9,0,14,0,52,5,24,0,67,
0,111,0,112,0,121,0,114,0,105,0,103,0,104,0,116,0,32,0,50,0,48,0,49,0,51,
0,32,0,71,0,111,0,111,0,103,0,108,0,101,0,32,0,73,0,110,0,99,0,46,0,32,0,
65,0,108,0,108,0,32,0,82,0,105,0,103,0,104,0,116,0,115,0,32,0,82,0,101,0,
115,0,101,0,114,0,118,0,101,0,100,0,46,0,78,0,111,0,116,0,111,0,32,0,83,0,
97,0,110,0,115,0,32,0,84,0,97,0,103,0,97,0,108,0,111,0,103,0,82,0,101,0,103,
0,117,0,108,0,97,0,114,0,77,0,111,0,110,0,111,0,116,0,121,0,112,0,101,0,32,
0,73,0,109,0,97,0,103,0,105,0,110,0,103,0,32,0,45,0,32,0,78,0,111,0,116,0,
111,0,32,0,83,0,97,0,110,0,115,0,32,0,84,0,97,0,103,0,97,0,108,0,111,0,103,
0,86,0,101,0,114,0,115,0,105,0,111,0,110,0,32,0,49,0,46,0,48,0,51,0,32,0,
117,0,104,0,78,0,111,0,116,0,111,0,83,0,97,0,110,0,115,0,84,0,97,0,103,0,
97,0,108,0,111,0,103,0,78,0,111,0,116,0,111,0,32,0,105,0,115,0,32,0,97,0,
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
0,0,0,0,0,0,0,0,0,0,0,2,0,8,0,2,255,255,0,3,0,1,0,0,0,12,0,0,0,34,0,0,0,2,
0,3,0,0,0,20,0,1,0,21,0,23,0,3,0,24,0,25,0,1,0,4,0,0,0,1,0,0,0,0,0,1,0,0,
0,10,0,30,0,46,0,1,68,70,76,84,0,8,0,4,0,0,0,0,255,255,0,1,0,0,0,1,109,97,
114,107,0,8,0,0,0,2,0,0,0,1,0,2,0,6,0,116,0,4,0,0,0,1,0,8,0,1,0,12,0,130,
0,1,0,18,0,30,0,1,0,1,0,21,0,1,0,0,0,6,0,1,254,162,5,140,0,14,0,60,0,30,0,
60,0,60,0,36,0,42,0,60,0,60,0,60,0,48,0,60,0,54,0,60,0,66,0,1,3,52,5,140,
0,1,4,56,5,140,0,1,3,72,5,140,0,1,4,41,5,140,0,1,4,76,5,240,0,1,3,232,5,140,
0,1,4,67,5,140,0,4,0,0,0,1,0,8,0,1,0,12,0,20,0,1,0,30,0,52,0,1,0,2,0,22,0,
23,0,2,0,1,0,7,0,20,0,0,0,2,0,0,0,10,0,0,0,16,0,1,255,56,0,0,0,1,253,228,
0,0,0,14,0,42,0,30,0,36,0,42,0,48,0,54,0,60,0,66,0,72,0,78,0,84,0,90,0,96,
0,102,0,1,4,94,0,0,0,1,4,133,0,0,0,1,4,81,0,0,0,1,4,107,0,0,0,1,3,129,255,
76,0,1,4,185,0,0,0,1,4,42,255,96,0,1,4,159,0,0,0,1,4,172,0,0,0,1,4,16,255,
156,0,1,3,168,255,196,0,1,4,224,255,96,0,1,4,16,0,0,0,0,0,1,0,0,0,10,0,28,
0,28,0,1,68,70,76,84,0,8,0,4,0,0,0,0,255,255,0,0,0,0,0,0,0};
#endif
