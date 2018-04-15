#ifndef __STRICT_ANSI__
#if defined(__linux__) || defined(__FreeBSD__) || defined(__OpenBSD__)
#if !defined(__ICC) && !defined(__ANDROID__)
#define HAVE_INCBIN
#endif
#endif
#endif

#ifdef HAVE_INCBIN
const int fz_resources_fonts_noto_NotoSansTaiLe_Regular_ttf_size = 10692;
extern const char fz_resources_fonts_noto_NotoSansTaiLe_Regular_ttf[];
asm(".section .rodata");
asm(".global fz_resources_fonts_noto_NotoSansTaiLe_Regular_ttf");
asm(".type fz_resources_fonts_noto_NotoSansTaiLe_Regular_ttf STT_OBJECT");
asm(".size fz_resources_fonts_noto_NotoSansTaiLe_Regular_ttf, 10692");
asm(".balign 64");
asm("fz_resources_fonts_noto_NotoSansTaiLe_Regular_ttf:");
asm(".incbin \"resources/fonts/noto/NotoSansTaiLe-Regular.ttf\"");
#else
const int fz_resources_fonts_noto_NotoSansTaiLe_Regular_ttf_size = 10692;
const char fz_resources_fonts_noto_NotoSansTaiLe_Regular_ttf[] = {
0,1,0,0,0,14,0,128,0,3,0,96,71,68,69,70,0,170,0,185,0,0,39,168,0,0,0,42,71,
80,79,83,196,213,212,70,0,0,39,212,0,0,1,72,71,83,85,66,169,29,188,84,0,0,
41,28,0,0,0,168,79,83,47,50,125,0,170,69,0,0,1,104,0,0,0,96,99,109,97,112,
94,73,79,254,0,0,2,208,0,0,0,140,103,97,115,112,0,22,0,35,0,0,39,152,0,0,
0,16,103,108,121,102,29,223,103,208,0,0,3,228,0,0,26,244,104,101,97,100,1,
213,71,19,0,0,0,236,0,0,0,54,104,104,101,97,12,16,2,135,0,0,1,36,0,0,0,36,
104,109,116,120,10,204,2,147,0,0,1,200,0,0,1,8,108,111,99,97,244,240,238,
143,0,0,3,92,0,0,0,134,109,97,120,112,0,70,0,78,0,0,1,72,0,0,0,32,110,97,
109,101,139,237,183,106,0,0,30,216,0,0,5,254,112,111,115,116,195,19,136,64,
0,0,36,216,0,0,2,189,0,1,0,0,0,1,10,61,222,189,85,225,95,15,60,245,0,11,8,
0,0,0,0,0,204,200,1,21,0,0,0,0,210,109,241,215,252,30,253,168,7,98,7,68,0,
0,0,9,0,2,0,0,0,0,0,0,0,1,0,0,8,141,253,168,0,0,7,188,252,30,252,224,7,98,
0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,66,0,1,0,0,0,66,0,77,0,3,0,0,0,0,0,1,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,4,4,114,1,144,0,5,0,0,5,154,5,51,0,0,1,31,
5,154,5,51,0,0,3,209,0,209,4,25,0,0,2,11,5,2,4,5,4,2,2,4,0,0,0,0,0,0,0,0,
64,0,0,0,0,0,0,0,71,79,79,71,0,64,0,0,254,255,8,141,253,168,0,0,8,141,2,88,
0,0,0,1,0,0,0,0,4,0,5,154,0,0,0,32,0,2,4,205,0,193,0,0,0,0,4,20,0,0,2,20,
0,0,4,27,255,236,5,80,255,236,4,74,0,100,5,209,255,236,5,68,255,236,4,221,
0,90,7,55,0,90,7,188,0,90,4,141,0,30,4,41,0,90,6,165,0,90,4,19,0,90,6,165,
0,90,4,157,0,90,6,202,0,90,5,112,255,236,4,16,0,90,5,61,255,236,4,73,0,100,
1,233,0,90,4,101,0,100,4,29,0,100,4,101,0,100,2,82,255,254,1,249,0,90,4,4,
0,100,4,101,0,100,4,29,0,100,1,173,0,100,5,9,255,236,4,110,0,20,4,47,0,90,
4,211,0,90,4,94,0,90,4,47,0,90,3,82,0,120,3,82,0,120,3,12,0,100,3,12,0,100,
4,156,0,100,4,156,0,100,5,10,0,90,4,130,0,78,4,202,0,8,4,130,0,78,4,130,0,
90,4,232,0,38,5,92,0,100,5,8,0,90,5,70,0,90,5,92,0,100,0,0,252,77,0,0,253,
7,0,0,253,14,0,0,252,88,0,0,252,30,3,136,0,153,3,136,1,83,3,136,1,90,3,136,
0,164,3,136,0,106,5,120,0,100,0,0,0,1,0,3,0,1,0,0,0,12,0,4,0,128,0,0,0,28,
0,16,0,3,0,12,0,0,0,13,0,32,0,160,3,1,3,8,3,12,16,73,25,109,25,116,48,2,48,
11,254,255,255,255,0,0,0,0,0,13,0,32,0,160,3,0,3,7,3,12,16,64,25,80,25,112,
48,1,48,8,254,255,255,255,0,1,255,245,255,227,255,99,253,55,253,50,253,47,
239,237,230,180,230,178,208,38,208,33,1,2,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,21,0,21,0,21,0,21,0,71,0,150,0,206,1,19,
1,89,1,155,1,240,2,70,2,134,2,189,3,30,3,93,3,202,4,1,4,103,4,180,5,8,5,89,
5,147,5,177,5,246,6,41,6,106,6,163,6,202,6,254,7,83,7,144,7,178,7,254,8,63,
8,123,8,184,8,253,9,40,9,65,9,103,9,124,9,144,9,179,9,214,10,8,10,55,10,94,
10,145,10,197,11,23,11,113,11,180,11,249,12,82,12,104,12,126,12,149,12,188,
12,214,12,236,13,2,13,25,13,63,13,88,13,122,0,0,0,2,0,193,0,0,4,10,5,182,
0,3,0,7,0,0,19,33,17,33,55,33,17,33,193,3,73,252,183,104,2,121,253,135,5,
182,250,74,104,4,230,0,0,1,255,236,255,236,3,193,4,94,0,28,0,0,1,34,6,7,6,
7,7,38,39,55,22,23,54,55,62,2,51,50,18,17,20,3,7,18,53,52,38,38,2,158,34,
104,82,169,80,142,36,43,156,54,12,46,102,108,111,106,50,116,120,24,180,28,
30,53,3,220,82,93,191,34,5,224,118,75,125,136,28,104,109,87,51,254,205,254,
217,240,255,0,40,1,15,231,153,229,124,0,0,2,255,236,255,236,4,246,4,94,0,
40,0,53,0,0,19,39,52,38,35,34,7,39,54,51,50,23,54,54,51,50,22,22,18,21,20,
7,7,55,6,35,34,38,53,52,54,36,51,23,46,2,35,34,6,7,5,34,6,21,20,22,51,50,
54,55,53,52,39,249,1,47,47,94,50,30,115,111,156,47,75,205,100,140,175,110,
56,5,174,3,162,196,162,184,140,1,9,183,90,21,74,108,103,115,185,39,2,40,188,
212,110,92,92,172,53,11,2,169,42,118,93,86,81,135,167,103,118,94,189,254,
218,203,168,130,60,121,121,170,155,107,169,95,3,118,135,62,159,135,133,137,
121,89,104,63,51,79,134,119,0,1,0,100,255,236,3,240,4,94,0,33,0,0,5,54,18,
53,52,38,38,35,34,6,7,23,20,2,7,7,54,17,52,2,39,55,22,23,54,54,51,50,22,22,
21,20,2,7,3,13,22,29,32,75,68,113,185,55,3,10,5,174,13,16,15,169,16,11,76,
234,99,114,130,59,29,18,20,158,1,108,116,169,140,61,123,107,187,145,254,165,
59,40,221,1,109,140,1,48,72,36,70,141,91,120,97,197,218,121,254,139,92,0,
0,2,255,236,255,236,5,119,4,138,0,32,0,44,0,0,19,38,39,55,22,23,54,51,50,
22,23,54,54,51,50,18,21,16,7,7,54,55,6,6,35,34,2,17,53,52,35,34,7,5,20,22,
51,50,54,53,52,38,35,34,6,15,5,30,158,25,6,118,108,80,101,17,88,187,84,215,
232,20,174,15,4,86,222,83,206,203,98,98,74,1,190,145,131,171,176,149,151,
154,169,3,0,198,141,55,87,96,139,96,105,97,104,254,238,251,254,159,220,40,
73,127,87,113,1,25,1,34,196,241,214,223,215,226,232,221,219,206,230,0,0,1,
255,236,255,236,4,234,4,138,0,45,0,0,1,22,18,21,20,2,7,7,55,6,6,35,34,38,
38,53,53,52,38,35,34,7,7,38,39,55,22,23,54,51,50,22,22,21,21,20,22,22,51,
50,54,55,54,53,16,39,4,195,16,23,12,12,178,8,72,193,75,116,128,56,41,57,98,
74,139,5,30,158,25,6,118,108,68,93,44,29,70,73,80,158,62,10,27,4,94,77,254,
236,159,98,254,165,141,40,127,51,76,96,204,239,146,197,126,214,6,198,141,
55,87,96,139,100,203,189,94,206,153,63,66,58,200,154,1,65,189,0,0,1,0,90,
255,236,4,131,4,94,0,41,0,0,1,16,2,35,34,38,38,39,6,6,35,34,38,38,17,53,52,
39,55,22,18,21,21,20,22,22,51,50,54,55,55,22,22,51,50,18,53,52,3,55,22,18,
4,131,142,149,65,122,99,29,54,141,74,65,69,29,27,171,12,20,7,16,24,34,104,
33,116,71,120,58,47,56,27,172,14,17,2,70,254,204,254,218,70,118,68,123,133,
87,192,1,2,94,215,216,34,79,254,198,89,116,162,150,58,154,103,57,167,145,
1,4,246,221,1,5,20,122,254,208,0,2,0,90,255,236,6,221,4,94,0,43,0,55,0,0,
5,54,18,53,52,38,38,35,34,6,7,22,21,16,7,7,55,6,6,35,34,2,17,53,52,39,55,
22,23,54,54,51,32,23,54,54,51,50,22,22,21,20,2,7,1,20,22,51,50,54,53,52,38,
35,34,6,5,250,22,29,32,75,68,92,182,72,31,9,174,8,88,221,82,206,203,26,171,
20,7,93,184,79,1,2,112,98,238,104,117,130,56,29,18,250,118,145,131,171,176,
149,151,154,169,20,158,1,108,116,169,140,61,89,82,105,123,254,150,207,40,
201,90,111,1,25,1,34,196,137,152,74,88,101,100,97,193,89,104,98,209,232,108,
254,180,119,2,19,215,226,232,221,219,206,230,0,0,3,0,90,255,236,7,98,4,94,
0,32,0,44,0,56,0,0,5,55,6,6,35,34,38,39,6,6,35,34,2,17,53,52,39,55,22,23,
54,54,51,32,23,54,54,51,50,18,21,16,7,1,20,22,51,50,54,53,52,38,35,34,6,5,
20,22,51,50,54,53,52,38,35,34,6,6,171,8,88,221,82,143,177,44,91,250,94,206,
203,26,171,20,7,93,184,79,1,39,104,89,214,97,216,231,9,249,203,145,131,171,
176,149,151,154,169,3,31,145,131,171,176,149,151,154,169,20,201,90,111,127,
123,111,139,1,25,1,34,196,137,152,74,88,101,100,97,251,116,135,254,238,255,
254,141,198,2,19,215,226,232,221,219,206,230,207,215,226,232,221,219,206,
230,0,0,1,0,30,255,236,4,51,4,94,0,39,0,0,1,22,18,21,20,2,7,7,55,6,35,34,
39,6,6,35,34,38,39,55,22,22,51,50,54,55,38,39,55,22,22,51,50,54,55,54,53,
52,2,39,3,232,30,45,13,11,180,15,141,104,78,43,65,177,66,88,87,7,166,2,36,
48,42,111,50,22,4,166,2,36,48,37,98,46,7,41,25,4,94,101,254,183,159,83,254,
182,96,40,165,89,60,55,81,152,156,29,109,100,38,43,70,105,29,109,100,31,34,
116,117,146,1,132,66,0,0,1,0,90,255,236,3,207,4,94,0,33,0,0,1,20,3,7,55,6,
6,35,34,38,38,53,53,52,2,39,55,22,18,21,21,20,22,22,51,50,54,55,54,53,16,
39,55,22,3,207,24,178,9,90,192,69,117,134,59,16,15,169,19,19,31,75,76,79,
161,71,9,27,164,39,2,44,248,254,224,40,129,60,69,98,209,232,47,140,1,48,72,
36,78,254,201,158,39,191,162,69,65,63,165,135,1,115,189,20,173,0,0,2,0,90,
255,236,6,75,4,94,0,53,0,67,0,0,1,22,17,21,20,22,22,51,50,55,38,53,53,52,
54,54,51,50,23,7,38,35,34,6,21,54,54,51,50,22,22,21,21,20,7,7,54,55,6,6,35,
34,39,6,6,35,34,38,38,53,53,52,2,39,1,20,22,51,50,54,54,53,52,38,35,34,6,
6,1,3,32,31,75,76,163,138,54,61,115,81,51,85,35,51,38,60,45,50,176,97,116,
180,108,20,174,10,4,99,154,85,174,101,85,227,81,117,134,59,15,10,3,38,131,
109,88,135,76,132,113,81,138,75,4,67,172,254,164,39,191,162,69,119,140,158,
79,148,242,122,47,67,19,151,152,87,112,124,247,154,28,106,240,40,77,100,97,
80,161,70,91,98,209,232,47,138,1,23,68,253,196,167,201,95,171,103,150,181,
87,152,0,2,0,90,255,236,3,185,4,94,0,24,0,37,0,0,1,22,17,20,2,7,7,55,6,6,
35,34,38,38,53,53,52,39,55,22,23,36,55,38,39,1,50,54,55,54,53,53,6,5,21,20,
22,22,3,153,32,11,10,174,8,90,197,68,116,128,56,21,155,35,5,1,41,194,4,15,
254,214,75,163,74,6,172,254,194,29,70,4,94,155,254,171,120,254,142,112,40,
129,60,69,96,204,239,146,247,113,40,133,204,34,41,176,119,252,36,63,63,158,
210,92,48,58,58,206,153,63,0,2,0,90,254,142,6,75,4,94,0,62,0,76,0,0,1,22,
17,21,20,22,22,51,50,54,55,38,53,53,52,54,54,51,50,23,7,38,38,35,34,6,21,
54,54,51,50,22,22,21,20,2,6,35,34,38,39,53,22,22,51,50,54,55,6,35,34,39,6,
6,35,34,38,38,53,53,52,2,39,1,20,22,51,50,54,54,53,52,38,35,34,6,6,1,3,32,
31,75,76,75,155,69,52,61,115,81,51,85,35,16,38,29,60,51,53,166,86,125,187,
110,111,207,144,69,153,54,57,146,56,142,145,16,147,178,192,102,84,223,84,
117,134,59,15,10,3,38,131,109,88,135,76,132,113,81,138,75,4,67,172,254,164,
39,191,162,69,60,57,130,181,68,148,242,122,47,67,6,13,130,173,95,104,118,
243,150,255,254,161,172,30,24,114,26,27,192,196,153,159,67,92,98,209,232,
47,138,1,23,68,253,196,167,201,95,171,103,150,181,87,152,0,2,0,90,255,236,
4,67,4,94,0,21,0,33,0,0,5,55,6,6,35,34,2,17,53,52,39,55,22,23,54,54,51,50,
18,21,16,3,1,20,22,51,50,54,53,52,38,35,34,6,3,140,8,88,221,82,206,203,26,
171,20,7,93,184,79,216,231,9,252,234,145,131,171,176,149,151,154,169,20,201,
90,111,1,25,1,34,196,137,152,74,88,101,100,97,254,238,255,254,211,254,244,
2,19,215,226,232,221,219,206,230,0,2,0,90,254,142,6,112,4,94,0,57,0,69,0,
0,5,54,18,53,52,38,38,35,34,6,7,22,21,21,16,2,35,34,38,39,53,22,22,51,50,
54,54,55,6,6,35,34,38,38,53,53,52,39,55,22,22,23,54,54,51,50,22,23,54,54,
51,50,22,22,21,20,2,7,1,20,22,51,50,54,53,52,38,35,34,6,5,141,22,29,32,75,
68,96,161,59,40,249,243,50,168,41,31,161,51,130,127,70,11,63,193,79,114,178,
108,26,171,6,10,10,52,181,94,109,166,53,78,229,96,114,130,59,29,18,250,227,
127,113,154,159,136,123,132,162,20,158,1,108,116,169,140,61,87,82,126,145,
125,254,119,254,112,38,23,107,14,39,92,211,188,75,102,129,251,137,171,137,
152,74,30,56,111,90,115,105,100,91,114,97,197,218,121,254,139,92,2,16,172,
186,237,238,152,181,253,0,0,1,255,236,254,252,5,22,4,138,0,51,0,0,5,54,18,
53,52,38,38,35,34,6,7,23,21,16,2,35,34,39,53,22,51,50,54,54,17,53,52,38,35,
34,7,7,38,39,55,22,23,54,51,50,22,23,54,54,51,50,22,22,21,20,2,7,4,51,22,
29,32,75,68,114,186,54,3,179,196,85,99,92,82,95,84,30,41,57,98,74,139,5,30,
158,25,6,118,108,70,93,24,73,241,103,114,130,59,29,18,20,158,1,108,116,169,
140,61,123,108,131,70,254,69,254,139,48,107,40,92,244,1,124,94,197,126,214,
6,198,141,55,87,96,139,103,119,95,127,97,197,218,121,254,139,92,0,2,0,90,
254,22,3,182,4,138,0,41,0,54,0,0,19,22,22,51,50,54,54,55,6,35,34,38,53,52,
54,36,51,23,38,38,35,34,7,7,38,39,55,22,23,54,51,50,18,17,20,2,6,6,35,34,
38,39,1,52,39,39,34,6,21,20,22,51,50,54,55,210,44,154,74,112,108,56,9,149,
172,162,184,140,1,9,183,70,21,111,120,180,61,140,5,30,158,26,5,116,185,191,
179,60,108,163,116,86,159,48,2,51,5,83,188,212,110,92,76,155,53,254,222,39,
46,81,187,178,91,170,155,107,169,95,3,176,139,214,6,198,141,55,94,86,136,
254,128,254,103,229,254,216,186,104,49,37,2,233,97,120,3,137,121,89,104,46,
40,0,0,1,255,236,254,22,4,227,4,138,0,54,0,0,19,38,39,55,22,23,54,51,50,22,
22,21,21,20,22,22,51,50,54,55,17,16,39,55,22,18,21,21,16,2,35,34,38,39,53,
22,22,51,50,54,54,55,6,6,35,34,38,38,53,53,52,38,35,34,7,15,5,30,158,25,6,
118,108,68,93,44,29,70,73,78,159,66,20,164,12,20,236,243,75,166,41,45,151,
76,108,132,66,5,85,194,70,116,128,56,41,57,98,74,3,0,198,141,55,87,96,139,
100,203,189,94,206,153,63,65,62,1,5,1,129,165,20,57,254,100,166,52,254,54,
254,99,54,32,114,41,44,97,202,190,61,73,96,204,239,146,197,126,214,0,0,1,
0,100,255,236,3,239,4,94,0,33,0,0,5,54,17,52,39,6,2,2,7,7,54,17,52,2,39,55,
22,18,21,3,54,18,18,54,51,50,30,3,21,20,2,7,3,50,13,14,62,192,243,29,173,
13,16,15,169,19,19,5,45,189,183,132,39,44,31,22,14,6,10,5,20,221,1,109,227,
128,65,254,210,254,56,80,38,221,1,109,140,1,48,72,36,78,254,201,158,254,187,
96,1,96,1,28,140,26,77,117,178,149,145,254,165,59,0,1,0,90,255,236,1,233,
7,38,0,15,0,0,5,46,2,53,17,16,39,55,22,17,17,20,22,22,23,1,233,152,145,61,
41,158,59,26,66,90,20,7,78,174,184,3,166,1,92,95,30,158,254,158,252,119,140,
122,53,11,0,2,0,100,255,236,4,1,7,68,0,32,0,41,0,0,23,38,2,53,17,16,18,51,
50,18,17,16,7,6,35,34,38,38,53,52,18,55,16,2,38,35,34,2,17,17,20,18,23,1,
6,6,21,20,22,22,51,54,140,12,28,238,218,244,225,25,81,98,123,190,103,237,
211,57,126,114,138,142,23,17,2,24,128,139,66,115,69,17,20,85,1,250,168,1,
83,1,104,1,166,254,53,254,22,253,85,230,18,106,190,119,202,1,4,26,1,74,1,
99,162,254,208,254,184,254,150,243,254,137,98,2,233,23,184,159,96,135,73,
242,0,1,0,100,255,236,3,185,7,68,0,29,0,0,23,46,3,3,17,52,18,54,51,50,18,
17,20,2,21,7,18,17,16,2,35,34,2,17,17,20,18,23,130,3,6,6,10,5,106,186,127,
224,210,11,174,13,125,137,118,125,18,12,20,33,98,109,222,1,21,1,123,231,1,
99,176,254,60,254,45,251,254,182,70,40,1,52,1,112,1,151,1,141,254,206,254,
206,254,110,174,254,123,133,0,1,0,100,254,22,4,1,7,68,0,39,0,0,19,22,22,51,
50,62,2,53,17,16,2,38,35,34,2,17,17,20,18,23,7,38,2,53,17,16,18,51,50,18,
17,17,16,2,6,35,34,38,39,248,50,191,79,113,93,51,24,56,125,112,138,142,23,
17,176,12,28,238,218,244,225,85,184,168,82,204,54,254,252,45,70,56,123,222,
176,2,182,1,71,1,94,157,254,208,254,184,254,150,243,254,137,98,40,85,1,250,
168,1,83,1,104,1,166,254,53,254,22,253,175,254,211,254,163,158,68,42,0,2,
255,254,254,22,3,226,4,97,0,19,0,33,0,0,5,4,35,34,38,17,17,16,39,55,22,18,
21,17,20,22,22,51,50,55,5,22,33,50,54,55,23,6,4,35,34,38,38,39,3,222,254,
196,171,202,170,41,158,29,30,42,87,99,191,244,252,154,127,1,26,133,211,122,
19,102,254,210,106,131,161,139,55,201,56,225,1,20,1,118,1,120,97,30,75,254,
227,182,254,85,111,128,55,31,56,205,28,33,89,37,53,42,90,78,0,1,0,90,254,
22,4,1,4,94,0,20,0,0,1,17,20,22,22,51,50,36,55,23,4,35,34,38,17,17,16,39,
55,22,18,1,51,42,87,99,129,1,8,77,20,254,229,239,202,170,41,158,29,30,2,64,
253,111,111,128,55,32,21,94,74,225,1,20,2,92,1,120,97,30,75,254,227,0,0,1,
0,100,254,22,3,160,4,94,0,30,0,0,1,22,18,21,21,20,2,6,35,34,2,17,52,18,55,
55,2,17,20,18,22,22,51,50,54,54,53,53,52,2,39,3,108,17,35,107,185,123,213,
200,19,12,170,29,28,59,96,84,78,93,42,16,17,4,94,76,254,75,104,133,244,254,
102,204,1,130,1,167,173,1,216,118,36,254,5,254,235,192,254,249,163,76,117,
229,242,222,111,1,137,144,0,2,0,100,253,228,4,201,7,68,0,42,0,51,0,0,1,4,
35,34,46,2,2,17,17,16,18,51,50,18,17,16,7,6,35,34,38,38,53,52,18,55,16,2,
38,35,34,2,17,17,16,18,22,22,51,50,36,55,1,6,6,21,20,22,22,51,54,4,201,254,
197,251,139,193,125,71,31,238,218,244,225,25,81,98,123,190,103,237,211,57,
126,114,138,142,38,85,147,113,123,1,14,173,254,139,128,139,66,115,69,17,254,
124,152,81,154,232,1,72,1,128,1,183,1,104,1,166,254,53,254,22,253,85,230,
18,106,190,119,202,1,4,26,1,74,1,99,162,254,208,254,184,254,50,254,142,254,
147,210,101,67,79,4,5,23,184,159,96,135,73,242,0,0,1,0,100,253,228,4,201,
7,68,0,35,0,0,1,4,35,34,46,2,2,17,17,52,18,54,51,50,18,17,21,7,7,19,53,16,
2,35,34,2,17,17,16,18,22,22,51,50,37,4,201,254,201,255,139,193,125,71,31,
106,186,127,220,214,1,173,2,129,137,117,122,38,85,147,113,246,1,64,254,124,
152,81,154,232,1,72,1,128,1,203,220,1,108,178,254,52,254,53,155,146,30,1,
9,89,1,133,1,121,254,199,254,229,254,14,254,142,254,147,210,101,146,0,0,1,
0,100,0,0,4,205,7,68,0,17,0,0,1,38,38,35,34,2,17,17,35,17,52,18,36,51,50,
22,22,23,4,130,121,202,136,206,213,176,143,1,6,182,96,164,155,127,6,44,87,
63,254,222,254,206,251,146,4,74,240,1,95,171,35,69,83,0,0,1,255,236,254,252,
4,175,4,138,0,52,0,0,19,54,51,50,22,22,21,21,20,7,22,51,50,54,54,53,53,16,
39,55,22,17,21,14,2,35,34,38,39,6,6,35,34,39,53,22,51,50,54,54,17,53,52,38,
35,34,7,7,38,39,55,22,169,118,108,68,93,44,9,119,131,74,76,32,20,164,32,2,
60,133,115,69,177,64,30,173,151,85,99,92,82,95,84,30,41,57,98,74,139,5,30,
158,25,3,211,139,100,203,189,70,145,121,80,66,151,177,17,1,74,147,20,155,
254,171,30,214,202,96,63,40,225,218,48,107,40,92,244,1,124,94,197,126,214,
6,198,141,55,87,0,1,0,20,255,236,4,170,4,94,0,42,0,0,37,6,35,34,38,2,17,53,
52,38,38,35,34,7,22,21,20,2,7,7,62,3,55,52,39,7,39,54,36,51,50,22,22,21,21,
20,22,22,51,50,55,4,170,103,74,114,121,54,30,64,70,60,147,22,13,13,180,3,
6,6,10,5,19,138,26,113,1,108,86,120,136,65,21,54,71,54,90,38,58,123,1,24,
1,2,130,83,94,40,27,255,191,81,254,183,85,40,19,72,91,182,205,160,213,36,
85,44,103,80,157,119,239,206,157,65,36,0,0,2,0,90,255,236,3,213,4,94,0,25,
0,37,0,0,37,6,4,35,34,2,17,52,18,54,51,50,22,22,21,20,6,4,35,35,22,22,51,
50,54,55,1,23,51,50,36,53,52,38,35,34,6,21,3,213,90,254,242,108,202,221,161,
255,136,102,142,75,169,254,220,178,48,20,143,115,94,229,70,253,89,22,21,218,
1,2,102,89,155,173,166,78,108,1,27,1,9,138,1,26,170,69,120,78,108,203,119,
143,168,74,51,1,46,1,152,131,79,90,234,203,0,2,0,90,255,236,5,15,4,94,0,27,
0,39,0,0,37,6,6,35,34,38,39,6,6,35,34,38,38,53,52,18,54,51,50,18,21,21,20,
22,22,51,50,55,1,20,22,51,50,54,53,52,38,35,34,6,5,15,65,79,33,107,112,24,
83,212,103,110,178,99,145,247,126,196,216,19,50,62,54,90,251,251,145,131,
151,151,132,134,154,158,42,36,26,107,113,103,117,124,228,143,159,1,42,186,
254,239,242,80,227,145,56,36,1,164,215,226,212,241,218,207,230,0,0,2,0,90,
255,236,4,4,4,94,0,36,0,44,0,0,37,50,54,55,35,34,38,38,53,52,54,54,51,50,
23,22,17,21,20,2,6,35,34,2,17,53,52,2,39,55,22,18,21,21,20,22,22,1,52,39,
6,21,20,22,51,2,24,138,157,16,35,102,161,86,111,199,129,41,37,48,131,252,
147,194,183,16,15,169,19,19,47,101,1,151,19,194,99,85,110,149,161,88,150,
88,100,173,99,10,213,254,193,30,159,255,0,151,1,7,1,20,47,140,1,48,72,36,
78,254,201,158,39,156,183,83,1,169,255,228,37,229,103,114,0,1,0,90,255,236,
3,213,4,94,0,25,0,0,37,6,6,35,34,2,17,52,18,54,51,50,22,23,7,38,38,35,32,
17,20,22,51,50,54,55,3,213,100,229,102,218,242,135,221,132,143,175,48,148,
37,112,85,254,216,184,143,84,186,82,166,87,99,1,41,1,18,145,1,14,152,107,
97,63,72,65,254,75,196,245,66,59,0,1,0,120,255,156,2,36,1,150,0,12,0,0,19,
30,2,21,20,35,34,38,39,38,38,39,167,79,184,118,103,43,41,11,22,109,99,1,150,
24,149,177,67,89,48,57,113,169,64,0,0,2,0,120,255,226,1,250,1,88,0,11,0,23,
0,0,37,20,6,35,34,38,53,52,54,51,50,22,7,52,38,35,34,6,21,20,22,51,50,54,
1,250,110,83,83,110,110,83,82,111,86,64,43,45,62,60,47,46,61,157,82,105,107,
80,77,110,107,80,48,59,62,45,43,64,61,0,0,1,0,100,255,241,2,168,6,21,0,5,
0,0,5,1,1,23,1,1,2,74,254,26,1,230,94,254,51,1,205,15,3,17,3,19,37,253,18,
253,19,0,0,1,0,100,255,241,2,168,6,21,0,5,0,0,55,1,1,55,1,1,100,1,205,254,
51,94,1,230,254,26,21,2,237,2,238,37,252,237,252,239,0,2,0,100,255,241,4,
56,6,21,0,5,0,11,0,0,5,1,1,23,1,1,5,1,1,23,1,1,2,74,254,26,1,230,94,254,51,
1,205,1,50,254,26,1,230,94,254,51,1,205,15,3,17,3,19,37,253,18,253,19,36,
3,17,3,19,37,253,18,253,19,0,2,0,100,255,241,4,56,6,21,0,5,0,11,0,0,9,2,39,
1,1,37,1,1,39,1,1,2,82,1,230,254,26,94,1,205,254,51,254,206,1,230,254,26,
94,1,205,254,51,6,21,252,239,252,237,37,2,238,2,237,36,252,239,252,237,37,
2,238,2,237,0,2,0,90,255,236,4,176,4,94,0,15,0,28,0,0,0,2,4,35,34,38,38,53,
52,18,36,51,50,22,18,21,4,18,51,50,54,54,53,52,2,35,34,6,21,4,176,156,254,
248,164,158,239,129,149,1,8,170,163,239,125,252,90,222,179,117,161,79,215,
183,168,192,1,136,254,235,135,146,255,159,160,1,17,145,156,254,253,152,193,
254,249,115,187,110,227,1,13,232,182,0,0,1,0,78,255,236,4,40,4,94,0,28,0,
0,0,2,35,34,7,39,54,54,51,50,22,18,21,20,14,2,35,34,38,39,55,22,22,51,50,
54,54,53,3,120,213,181,179,145,62,73,224,113,174,247,125,92,168,197,122,115,
236,56,131,58,177,93,118,157,76,2,221,1,14,131,66,74,106,156,254,252,155,
119,225,153,70,137,102,90,110,104,115,184,109,0,0,1,0,8,253,168,4,102,4,94,
0,19,0,0,0,3,55,22,18,17,16,0,33,34,36,39,55,30,2,51,50,18,17,3,182,21,176,
11,10,254,201,254,223,157,254,233,82,161,22,104,162,100,205,188,3,48,1,26,
20,187,253,227,254,249,254,162,254,135,193,156,70,66,139,99,1,31,1,46,0,1,
0,78,253,172,4,40,4,94,0,30,0,0,5,1,7,1,55,22,22,51,50,54,54,53,52,2,35,34,
7,39,54,54,51,50,22,18,21,20,14,2,35,34,1,169,1,156,151,253,160,131,58,177,
93,118,157,76,213,181,179,145,62,73,224,113,174,247,125,92,168,197,122,27,
15,254,20,89,3,47,90,110,104,115,184,109,230,1,14,131,66,74,106,156,254,252,
155,119,225,153,70,0,0,1,0,90,253,172,4,55,4,94,0,31,0,0,37,1,39,1,6,35,34,
38,2,53,52,62,2,51,50,22,23,7,38,38,35,34,6,6,21,20,22,22,51,50,55,4,52,253,
159,151,1,159,45,40,157,254,145,86,158,205,130,120,220,70,131,58,171,92,120,
162,79,112,186,109,173,154,219,252,209,89,1,239,8,146,1,1,161,119,218,158,
79,125,104,90,105,99,113,188,115,150,224,118,168,0,0,2,0,38,253,168,4,132,
4,94,0,41,0,53,0,0,23,55,22,22,51,50,54,18,53,17,52,2,35,34,6,7,54,54,51,
50,22,21,20,6,35,34,38,53,52,54,36,51,50,22,18,23,19,16,0,33,34,36,0,54,53,
52,38,35,34,6,21,20,22,51,38,161,50,202,136,127,173,93,217,193,120,189,22,
30,94,38,115,165,177,130,133,180,154,1,1,150,153,235,143,1,2,254,209,254,
222,175,254,243,1,90,76,103,85,63,81,105,75,251,70,139,165,112,1,4,217,1,
176,210,1,1,150,101,29,36,160,118,125,168,184,148,162,246,132,127,254,242,
187,254,90,254,162,254,150,195,2,248,96,69,73,115,92,74,74,113,0,1,0,100,
255,236,5,2,7,68,0,62,0,0,4,36,2,53,17,52,18,36,51,50,22,23,7,38,38,35,34,
2,17,17,20,22,22,51,50,54,53,52,38,35,34,6,35,34,38,53,52,54,54,51,50,23,
7,38,38,35,34,6,21,20,22,51,50,54,51,50,22,22,21,20,6,4,35,1,251,254,245,
140,115,1,15,211,172,245,130,84,100,217,146,215,206,102,204,146,193,185,53,
38,52,169,75,134,145,76,146,99,139,149,24,48,141,54,88,87,74,61,71,169,83,
66,94,57,125,254,245,204,20,143,1,24,175,2,13,193,1,91,217,90,107,83,82,68,
254,195,254,223,253,230,142,222,127,191,168,66,75,40,144,127,70,136,88,49,
94,12,16,103,74,72,86,45,63,125,69,139,215,124,0,1,0,90,253,168,4,174,4,94,
0,44,0,0,1,6,6,35,34,38,53,52,54,0,54,53,52,38,35,34,6,21,20,22,23,7,38,38,
53,52,18,36,51,50,22,22,21,20,14,3,21,20,22,51,50,54,55,4,12,57,161,98,139,
161,136,1,75,135,217,177,172,190,111,89,57,140,179,134,1,6,181,151,247,133,
89,165,247,101,81,66,53,134,49,254,62,66,84,148,119,104,183,1,39,235,131,
170,218,231,192,152,200,50,88,58,253,155,149,1,1,156,122,237,162,130,197,
175,221,147,72,72,68,55,51,0,0,2,0,90,255,236,4,236,4,94,0,30,0,42,0,0,5,
39,54,54,53,52,38,38,35,34,7,22,18,21,20,2,7,38,2,53,52,18,36,51,50,30,2,
21,20,2,1,6,6,21,20,22,23,54,54,53,52,38,3,121,50,108,137,111,197,124,87,
74,94,123,150,118,155,195,140,1,12,181,125,205,162,89,209,253,109,61,65,96,
71,49,50,73,20,89,58,246,144,143,221,122,33,87,254,248,113,148,254,230,96,
54,1,72,178,144,1,10,168,80,160,215,112,174,254,194,3,77,59,169,97,158,246,
47,69,181,99,147,205,0,0,1,0,100,253,168,5,2,4,94,0,62,0,0,0,6,21,20,22,51,
50,54,55,23,6,35,34,38,53,52,54,51,50,22,51,50,54,53,52,38,35,34,6,6,21,17,
16,33,50,54,55,23,6,6,35,34,36,39,38,53,17,52,62,2,51,50,4,22,21,20,6,6,35,
34,38,35,2,173,78,86,89,55,140,48,24,149,139,144,177,151,131,74,170,49,38,
53,185,193,146,204,102,1,165,146,217,100,84,130,245,172,230,254,244,49,50,
81,154,212,139,205,1,10,125,57,94,66,83,167,70,1,174,98,75,72,90,16,12,94,
49,165,114,130,156,40,75,66,167,190,127,222,142,254,96,253,202,68,82,83,107,
90,224,162,161,170,1,147,135,227,156,80,123,214,139,69,125,63,45,0,0,1,252,
77,4,217,253,233,6,33,0,9,0,0,1,35,38,38,39,53,51,22,22,23,253,233,121,75,
179,37,215,32,118,47,4,217,60,191,56,21,66,183,54,0,0,1,253,7,4,217,254,163,
6,33,0,9,0,0,1,54,54,55,51,21,6,6,7,35,253,7,38,117,40,217,44,186,63,119,
4,242,48,177,78,21,64,194,49,0,0,1,253,14,5,0,253,225,5,229,0,11,0,0,1,52,
54,51,50,22,21,20,6,35,34,38,253,14,61,45,42,63,63,42,45,61,5,115,60,54,54,
60,59,56,56,0,0,2,252,88,5,12,254,152,5,215,0,11,0,23,0,0,1,52,54,51,50,22,
21,20,6,35,34,38,37,52,54,51,50,22,21,20,6,35,34,38,252,88,56,40,39,58,58,
39,40,56,1,129,56,38,39,58,58,39,38,56,5,115,53,47,47,53,53,50,50,53,53,47,
47,53,53,50,50,0,0,1,252,30,4,217,254,210,6,33,0,12,0,0,1,51,22,23,54,55,
51,21,6,7,35,38,39,252,30,123,114,105,126,97,127,205,51,184,60,192,6,33,74,
115,126,63,27,205,96,102,199,0,0,1,0,153,4,217,2,53,6,33,0,9,0,0,1,35,38,
38,39,53,51,22,22,23,2,53,121,75,179,37,215,32,118,47,4,217,60,191,56,21,
66,183,54,0,0,1,1,83,4,217,2,239,6,33,0,9,0,0,1,54,54,55,51,21,6,6,7,35,1,
83,38,117,40,217,44,186,63,119,4,242,48,177,78,21,64,194,49,0,0,1,1,90,5,
0,2,45,5,229,0,11,0,0,1,52,54,51,50,22,21,20,6,35,34,38,1,90,61,45,42,63,
63,42,45,61,5,115,60,54,54,60,59,56,56,0,0,2,0,164,5,12,2,228,5,215,0,11,
0,23,0,0,19,52,54,51,50,22,21,20,6,35,34,38,37,52,54,51,50,22,21,20,6,35,
34,38,164,56,40,39,58,58,39,40,56,1,129,56,38,39,58,58,39,38,56,5,115,53,
47,47,53,53,50,50,53,53,47,47,53,53,50,50,0,1,0,106,4,217,3,30,6,33,0,12,
0,0,19,51,22,23,54,55,51,21,6,7,35,38,39,106,123,114,105,126,97,127,205,51,
184,60,192,6,33,74,115,126,63,27,205,96,102,199,0,1,0,100,0,0,4,205,7,68,
0,17,0,0,1,38,38,35,34,2,17,17,35,17,52,18,36,51,50,22,22,23,4,130,121,202,
136,206,213,176,143,1,6,182,96,164,155,127,6,44,87,63,254,222,254,206,251,
146,4,74,240,1,95,171,35,69,83,0,0,0,0,15,0,186,0,3,0,1,4,9,0,0,0,94,0,0,
0,3,0,1,4,9,0,1,0,32,0,94,0,3,0,1,4,9,0,2,0,14,0,126,0,3,0,1,4,9,0,3,0,70,
0,140,0,3,0,1,4,9,0,4,0,32,0,94,0,3,0,1,4,9,0,5,0,30,0,210,0,3,0,1,4,9,0,
6,0,26,0,240,0,3,0,1,4,9,0,7,0,68,1,10,0,3,0,1,4,9,0,8,0,42,1,78,0,3,0,1,
4,9,0,9,0,40,1,120,0,3,0,1,4,9,0,10,0,96,1,160,0,3,0,1,4,9,0,11,0,62,2,0,
0,3,0,1,4,9,0,12,0,60,2,62,0,3,0,1,4,9,0,13,2,150,2,122,0,3,0,1,4,9,0,14,
0,52,5,16,0,67,0,111,0,112,0,121,0,114,0,105,0,103,0,104,0,116,0,32,0,50,
0,48,0,49,0,50,0,32,0,71,0,111,0,111,0,103,0,108,0,101,0,32,0,73,0,110,0,
99,0,46,0,32,0,65,0,108,0,108,0,32,0,82,0,105,0,103,0,104,0,116,0,115,0,32,
0,82,0,101,0,115,0,101,0,114,0,118,0,101,0,100,0,46,0,78,0,111,0,116,0,111,
0,32,0,83,0,97,0,110,0,115,0,32,0,84,0,97,0,105,0,32,0,76,0,101,0,82,0,101,
0,103,0,117,0,108,0,97,0,114,0,77,0,111,0,110,0,111,0,116,0,121,0,112,0,101,
0,32,0,73,0,109,0,97,0,103,0,105,0,110,0,103,0,32,0,45,0,32,0,78,0,111,0,
116,0,111,0,32,0,83,0,97,0,110,0,115,0,32,0,84,0,97,0,105,0,32,0,76,0,101,
0,86,0,101,0,114,0,115,0,105,0,111,0,110,0,32,0,49,0,46,0,48,0,52,0,32,0,
117,0,104,0,78,0,111,0,116,0,111,0,83,0,97,0,110,0,115,0,84,0,97,0,105,0,
76,0,101,0,78,0,111,0,116,0,111,0,32,0,105,0,115,0,32,0,97,0,32,0,116,0,114,
0,97,0,100,0,101,0,109,0,97,0,114,0,107,0,32,0,111,0,102,0,32,0,71,0,111,
0,111,0,103,0,108,0,101,0,32,0,73,0,110,0,99,0,46,0,77,0,111,0,110,0,111,
0,116,0,121,0,112,0,101,0,32,0,73,0,109,0,97,0,103,0,105,0,110,0,103,0,32,
0,73,0,110,0,99,0,46,0,77,0,111,0,110,0,111,0,116,0,121,0,112,0,101,0,32,
0,68,0,101,0,115,0,105,0,103,0,110,0,32,0,84,0,101,0,97,0,109,0,68,0,97,0,
116,0,97,0,32,0,117,0,110,0,104,0,105,0,110,0,116,0,101,0,100,0,46,0,32,0,
68,0,101,0,115,0,105,0,103,0,110,0,101,0,100,0,32,0,98,0,121,0,32,0,77,0,
111,0,110,0,111,0,116,0,121,0,112,0,101,0,32,0,100,0,101,0,115,0,105,0,103,
0,110,0,32,0,116,0,101,0,97,0,109,0,46,0,104,0,116,0,116,0,112,0,58,0,47,
0,47,0,119,0,119,0,119,0,46,0,103,0,111,0,111,0,103,0,108,0,101,0,46,0,99,
0,111,0,109,0,47,0,103,0,101,0,116,0,47,0,110,0,111,0,116,0,111,0,47,0,104,
0,116,0,116,0,112,0,58,0,47,0,47,0,119,0,119,0,119,0,46,0,109,0,111,0,110,
0,111,0,116,0,121,0,112,0,101,0,46,0,99,0,111,0,109,0,47,0,115,0,116,0,117,
0,100,0,105,0,111,0,84,0,104,0,105,0,115,0,32,0,70,0,111,0,110,0,116,0,32,
0,83,0,111,0,102,0,116,0,119,0,97,0,114,0,101,0,32,0,105,0,115,0,32,0,108,
0,105,0,99,0,101,0,110,0,115,0,101,0,100,0,32,0,117,0,110,0,100,0,101,0,114,
0,32,0,116,0,104,0,101,0,32,0,83,0,73,0,76,0,32,0,79,0,112,0,101,0,110,0,
32,0,70,0,111,0,110,0,116,0,32,0,76,0,105,0,99,0,101,0,110,0,115,0,101,0,
44,0,32,0,86,0,101,0,114,0,115,0,105,0,111,0,110,0,32,0,49,0,46,0,49,0,46,
0,32,0,84,0,104,0,105,0,115,0,32,0,70,0,111,0,110,0,116,0,32,0,83,0,111,0,
102,0,116,0,119,0,97,0,114,0,101,0,32,0,105,0,115,0,32,0,100,0,105,0,115,
0,116,0,114,0,105,0,98,0,117,0,116,0,101,0,100,0,32,0,111,0,110,0,32,0,97,
0,110,0,32,0,34,0,65,0,83,0,32,0,73,0,83,0,34,0,32,0,66,0,65,0,83,0,73,0,
83,0,44,0,32,0,87,0,73,0,84,0,72,0,79,0,85,0,84,0,32,0,87,0,65,0,82,0,82,
0,65,0,78,0,84,0,73,0,69,0,83,0,32,0,79,0,82,0,32,0,67,0,79,0,78,0,68,0,73,
0,84,0,73,0,79,0,78,0,83,0,32,0,79,0,70,0,32,0,65,0,78,0,89,0,32,0,75,0,73,
0,78,0,68,0,44,0,32,0,101,0,105,0,116,0,104,0,101,0,114,0,32,0,101,0,120,
0,112,0,114,0,101,0,115,0,115,0,32,0,111,0,114,0,32,0,105,0,109,0,112,0,108,
0,105,0,101,0,100,0,46,0,32,0,83,0,101,0,101,0,32,0,116,0,104,0,101,0,32,
0,83,0,73,0,76,0,32,0,79,0,112,0,101,0,110,0,32,0,70,0,111,0,110,0,116,0,
32,0,76,0,105,0,99,0,101,0,110,0,115,0,101,0,32,0,102,0,111,0,114,0,32,0,
116,0,104,0,101,0,32,0,115,0,112,0,101,0,99,0,105,0,102,0,105,0,99,0,32,0,
108,0,97,0,110,0,103,0,117,0,97,0,103,0,101,0,44,0,32,0,112,0,101,0,114,0,
109,0,105,0,115,0,115,0,105,0,111,0,110,0,115,0,32,0,97,0,110,0,100,0,32,
0,108,0,105,0,109,0,105,0,116,0,97,0,116,0,105,0,111,0,110,0,115,0,32,0,103,
0,111,0,118,0,101,0,114,0,110,0,105,0,110,0,103,0,32,0,121,0,111,0,117,0,
114,0,32,0,117,0,115,0,101,0,32,0,111,0,102,0,32,0,116,0,104,0,105,0,115,
0,32,0,70,0,111,0,110,0,116,0,32,0,83,0,111,0,102,0,116,0,119,0,97,0,114,
0,101,0,46,0,104,0,116,0,116,0,112,0,58,0,47,0,47,0,115,0,99,0,114,0,105,
0,112,0,116,0,115,0,46,0,115,0,105,0,108,0,46,0,111,0,114,0,103,0,47,0,79,
0,70,0,76,0,0,0,2,0,0,0,0,0,0,255,102,0,102,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,66,0,0,1,2,0,2,0,3,1,3,1,4,1,5,1,6,1,7,1,8,1,9,1,10,1,11,1,12,
1,13,1,14,1,15,1,16,1,17,1,18,1,19,1,20,1,21,1,22,1,23,1,24,1,25,1,26,1,27,
1,28,1,29,1,30,1,31,1,32,1,33,1,34,1,35,1,36,1,37,1,38,1,39,1,40,1,41,1,42,
1,43,1,44,1,45,1,46,1,47,1,48,1,49,1,50,1,51,1,52,1,53,1,54,1,55,1,56,1,57,
1,58,1,59,1,60,1,61,1,62,1,63,1,64,4,110,117,108,108,7,117,110,105,49,57,
53,48,7,117,110,105,49,57,53,49,7,117,110,105,49,57,53,50,7,117,110,105,49,
57,53,51,7,117,110,105,49,57,53,52,7,117,110,105,49,57,53,53,7,117,110,105,
49,57,53,54,7,117,110,105,49,57,53,55,7,117,110,105,49,57,53,56,7,117,110,
105,49,57,53,57,7,117,110,105,49,57,53,65,7,117,110,105,49,57,53,66,7,117,
110,105,49,57,53,67,7,117,110,105,49,57,53,68,7,117,110,105,49,57,53,69,7,
117,110,105,49,57,53,70,7,117,110,105,49,57,54,48,7,117,110,105,49,57,54,
49,7,117,110,105,49,57,54,50,7,117,110,105,49,57,54,51,7,117,110,105,49,57,
54,52,7,117,110,105,49,57,54,53,7,117,110,105,49,57,54,54,7,117,110,105,49,
57,54,55,7,117,110,105,49,57,54,56,7,117,110,105,49,57,54,57,7,117,110,105,
49,57,54,65,7,117,110,105,49,57,54,66,7,117,110,105,49,57,54,67,7,117,110,
105,49,57,54,68,7,117,110,105,49,57,55,48,7,117,110,105,49,57,55,49,7,117,
110,105,49,57,55,50,7,117,110,105,49,57,55,51,7,117,110,105,49,57,55,52,7,
117,110,105,51,48,48,49,7,117,110,105,51,48,48,50,7,117,110,105,51,48,48,
56,7,117,110,105,51,48,48,57,7,117,110,105,51,48,48,65,7,117,110,105,51,48,
48,66,7,117,110,105,49,48,52,48,7,117,110,105,49,48,52,49,7,117,110,105,49,
48,52,50,7,117,110,105,49,48,52,51,7,117,110,105,49,48,52,52,7,117,110,105,
49,48,52,53,7,117,110,105,49,48,52,54,7,117,110,105,49,48,52,55,7,117,110,
105,49,48,52,56,7,117,110,105,49,48,52,57,7,117,110,105,48,51,48,48,7,117,
110,105,48,51,48,49,7,117,110,105,48,51,48,55,7,117,110,105,48,51,48,56,7,
117,110,105,48,51,48,67,12,117,110,105,51,48,48,46,115,112,97,99,101,13,117,
110,105,48,51,48,49,46,115,112,97,99,101,13,117,110,105,48,51,48,55,46,115,
112,97,99,101,13,117,110,105,48,51,48,56,46,115,112,97,99,101,13,117,110,
105,48,51,48,67,46,115,112,97,99,101,12,117,110,105,49,57,54,67,46,119,105,
100,101,0,0,0,0,1,0,3,0,8,0,10,0,14,0,7,255,255,0,15,0,1,0,0,0,12,0,0,0,34,
0,0,0,2,0,3,0,0,0,54,0,1,0,55,0,59,0,3,0,60,0,65,0,1,0,4,0,0,0,1,0,0,0,0,
0,1,0,0,0,10,0,30,0,44,0,1,68,70,76,84,0,8,0,4,0,0,0,0,255,255,0,1,0,0,0,
1,109,97,114,107,0,8,0,0,0,1,0,0,0,1,0,4,0,4,0,0,0,1,0,8,0,1,0,12,0,22,0,
1,0,44,0,72,0,2,0,1,0,55,0,59,0,0,0,2,0,3,0,4,0,31,0,0,0,33,0,33,0,28,0,65,
0,65,0,29,0,5,0,0,0,22,0,0,0,22,0,0,0,22,0,0,0,22,0,0,0,22,0,1,251,160,0,
0,0,30,0,62,0,68,0,146,0,74,0,80,0,86,0,92,0,98,0,170,0,110,0,104,0,110,0,
116,0,122,0,128,0,134,0,170,0,140,0,146,0,152,0,158,0,182,0,176,0,164,0,164,
0,170,0,176,0,182,0,188,0,194,0,1,0,0,0,0,0,1,0,190,0,0,0,1,0,210,0,0,0,1,
0,200,0,0,0,1,0,130,0,0,0,1,1,194,0,0,0,1,2,18,0,0,0,1,1,74,0,0,0,1,0,40,
0,0,0,1,1,94,0,0,0,1,0,115,0,0,0,1,1,104,0,0,0,1,0,140,0,0,0,1,0,220,0,0,
0,1,0,90,0,0,0,1,1,14,0,0,0,1,3,112,0,0,0,1,255,6,0,0,0,1,0,30,0,0,0,1,3,
102,0,0,0,1,3,32,0,0,0,1,0,160,0,0,0,1,2,48,255,201,0,1,0,0,0,10,0,30,0,46,
0,1,68,70,76,84,0,8,0,4,0,0,0,0,255,255,0,1,0,0,0,1,99,99,109,112,0,8,0,0,
0,2,0,0,0,1,0,4,0,10,0,36,0,78,0,98,0,6,0,0,0,1,0,8,0,3,0,0,0,1,0,74,0,1,
0,94,0,1,0,0,0,2,0,6,0,0,0,1,0,8,0,3,0,1,0,18,0,1,0,68,0,0,0,1,0,0,0,3,0,
1,0,6,0,23,0,24,0,25,0,26,0,30,0,31,0,1,0,0,0,1,0,8,0,1,0,6,0,33,0,1,0,1,
0,32,0,1,0,0,0,1,0,8,0,1,0,6,0,5,0,2,0,1,0,55,0,59,0,0,0};
#endif
