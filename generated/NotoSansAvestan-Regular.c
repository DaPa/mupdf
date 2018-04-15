#ifndef __STRICT_ANSI__
#if defined(__linux__) || defined(__FreeBSD__) || defined(__OpenBSD__)
#if !defined(__ICC) && !defined(__ANDROID__)
#define HAVE_INCBIN
#endif
#endif
#endif

#ifdef HAVE_INCBIN
const int fz_resources_fonts_noto_NotoSansAvestan_Regular_ttf_size = 12680;
extern const char fz_resources_fonts_noto_NotoSansAvestan_Regular_ttf[];
asm(".section .rodata");
asm(".global fz_resources_fonts_noto_NotoSansAvestan_Regular_ttf");
asm(".type fz_resources_fonts_noto_NotoSansAvestan_Regular_ttf STT_OBJECT");
asm(".size fz_resources_fonts_noto_NotoSansAvestan_Regular_ttf, 12680");
asm(".balign 64");
asm("fz_resources_fonts_noto_NotoSansAvestan_Regular_ttf:");
asm(".incbin \"resources/fonts/noto/NotoSansAvestan-Regular.ttf\"");
#else
const int fz_resources_fonts_noto_NotoSansAvestan_Regular_ttf_size = 12680;
const char fz_resources_fonts_noto_NotoSansAvestan_Regular_ttf[] = {
0,1,0,0,0,14,0,128,0,3,0,96,71,68,69,70,1,95,27,211,0,0,48,116,0,0,0,88,71,
80,79,83,184,15,174,9,0,0,48,204,0,0,0,48,71,83,85,66,141,102,130,254,0,0,
48,252,0,0,0,140,79,83,47,50,123,67,110,79,0,0,1,104,0,0,0,96,99,109,97,112,
47,23,234,59,0,0,2,236,0,0,0,224,103,97,115,112,0,7,0,7,0,0,48,104,0,0,0,
12,103,108,121,102,135,74,163,252,0,0,4,96,0,0,34,198,104,101,97,100,4,23,
86,207,0,0,0,236,0,0,0,54,104,104,101,97,14,42,8,220,0,0,1,36,0,0,0,36,104,
109,116,120,137,23,13,7,0,0,1,200,0,0,1,36,108,111,99,97,15,81,23,158,0,0,
3,204,0,0,0,148,109,97,120,112,0,80,0,129,0,0,1,72,0,0,0,32,110,97,109,101,
141,34,185,85,0,0,39,40,0,0,6,6,112,111,115,116,230,208,216,232,0,0,45,48,
0,0,3,54,0,1,0,0,0,1,10,61,57,107,53,134,95,15,60,245,0,11,8,0,0,0,0,0,205,
53,55,82,0,0,0,0,210,40,203,225,250,20,254,20,11,134,6,77,0,0,0,9,0,2,0,0,
0,0,0,0,0,1,0,0,8,141,253,168,0,0,12,21,250,20,254,213,11,134,0,1,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,73,0,1,0,0,0,73,0,128,0,6,0,0,0,0,0,1,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,4,5,157,1,144,0,5,0,0,5,154,5,51,0,0,1,31,5,154,5,51,
0,0,3,209,0,102,2,0,0,0,2,11,5,2,4,5,4,2,2,4,0,0,0,0,2,0,0,0,0,0,0,0,0,0,
0,0,71,79,79,71,0,64,0,0,255,255,8,141,253,168,0,0,8,141,2,88,0,0,0,65,0,
0,0,0,4,74,5,182,0,0,0,32,0,2,4,205,0,193,0,0,0,0,4,20,0,0,2,20,0,0,0,0,255,
202,0,0,254,213,6,96,0,41,9,23,0,41,7,207,0,113,10,135,0,113,6,61,0,102,4,
205,0,76,2,131,0,113,2,131,0,113,6,203,0,174,6,203,0,174,6,158,255,205,6,
158,255,205,3,45,0,41,3,242,0,41,2,43,0,41,4,49,0,74,2,213,0,74,6,178,0,113,
6,145,0,164,6,106,0,174,5,10,0,113,5,8,0,20,4,98,0,20,4,139,0,174,5,123,0,
113,6,43,0,102,4,238,0,113,3,104,252,205,4,35,0,164,6,145,0,102,5,53,0,133,
5,53,0,133,2,61,250,20,7,82,0,133,2,131,0,102,5,211,0,20,2,131,0,102,2,18,
0,174,2,39,255,154,7,166,0,76,3,186,0,41,3,186,0,41,6,100,0,20,8,98,255,242,
4,184,0,113,2,184,255,205,4,162,255,205,4,213,0,20,2,39,255,154,7,94,0,41,
7,139,0,133,9,23,0,74,8,176,0,143,6,147,0,133,4,158,1,129,4,20,0,113,5,174,
0,113,7,72,0,113,7,72,0,113,7,72,0,113,7,72,0,113,11,239,0,41,12,21,0,174,
11,150,0,102,11,42,0,133,2,213,0,115,3,103,1,33,0,0,0,2,0,3,0,1,0,0,0,20,
0,3,0,10,0,0,0,100,0,4,0,80,0,0,0,16,0,16,0,3,0,0,0,0,0,13,0,32,0,160,32,
13,46,49,254,255,255,255,0,0,0,0,0,13,0,32,0,160,32,12,46,48,254,255,255,
255,0,1,255,245,255,227,255,99,223,248,210,23,1,2,0,1,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,12,0,0,0,0,0,124,0,0,0,0,0,0,0,9,0,0,0,0,0,0,0,0,0,0,0,1,0,
0,0,13,0,0,0,13,0,0,0,2,0,0,0,32,0,0,0,32,0,0,0,3,0,0,0,160,0,0,0,160,0,0,
0,3,0,0,32,12,0,0,32,13,0,0,0,4,0,0,46,48,0,0,46,49,0,0,0,71,0,0,254,255,
0,0,254,255,0,0,0,1,0,1,11,0,0,1,11,53,0,0,0,6,0,1,11,57,0,1,11,63,0,0,0,
60,0,0,0,21,0,21,0,21,0,21,0,34,0,64,0,109,0,175,0,253,1,94,1,164,1,224,2,
8,2,47,2,109,2,203,2,255,3,57,3,83,3,113,3,142,3,185,3,227,4,42,4,133,4,191,
4,242,5,39,5,120,5,156,5,229,6,34,6,89,6,140,6,194,7,34,7,91,7,164,7,206,
8,41,8,80,8,137,8,177,8,190,8,227,9,50,9,106,9,178,9,247,10,87,10,147,10,
176,10,245,11,44,11,81,11,154,11,232,12,79,12,189,13,13,13,51,13,106,13,161,
13,216,14,15,14,116,14,218,15,105,15,237,16,148,17,36,17,76,17,99,0,2,0,193,
0,0,4,10,5,182,0,3,0,7,0,0,19,33,17,33,55,33,17,33,193,3,73,252,183,104,2,
121,253,135,5,182,250,74,104,4,230,0,0,1,255,202,254,173,0,54,6,77,0,3,0,
0,3,17,51,17,54,108,254,173,7,160,248,96,0,1,254,213,254,174,1,43,6,77,0,
14,0,0,19,23,7,39,17,35,17,7,39,55,39,55,23,55,23,74,225,75,170,108,170,75,
225,225,75,224,224,75,5,43,220,73,169,249,255,6,1,169,73,220,217,73,220,220,
74,0,0,1,0,41,0,172,5,219,3,109,0,29,0,0,19,33,50,54,53,17,51,22,21,20,22,
51,50,54,53,17,51,22,21,20,6,35,34,38,39,6,6,35,34,39,41,1,51,143,127,144,
41,113,135,144,120,143,41,206,234,125,161,62,61,164,128,174,143,1,66,126,
150,1,23,182,87,154,132,125,143,1,31,179,110,221,195,92,121,119,94,21,0,1,
0,41,0,172,8,145,3,109,0,45,0,0,1,50,54,53,17,51,22,21,20,6,35,34,38,39,6,
6,35,34,38,39,6,6,35,34,39,53,33,50,54,53,17,51,22,21,20,22,51,50,54,53,17,
51,22,21,20,22,6,209,144,120,143,41,206,234,126,162,60,59,164,131,126,159,
57,61,164,128,172,143,1,49,144,126,144,41,113,135,144,120,143,41,111,1,66,
125,143,1,31,179,110,221,195,95,118,116,97,97,116,119,94,21,129,128,150,1,
21,182,85,156,132,125,143,1,31,164,109,154,128,0,0,1,0,113,254,20,7,74,3,
129,0,55,0,0,1,34,21,20,22,23,53,33,50,54,53,17,51,22,21,20,22,51,50,54,53,
17,51,22,22,21,20,6,35,34,38,39,6,6,35,34,39,21,34,21,20,22,23,7,38,38,53,
52,54,55,38,38,53,52,54,51,2,29,240,50,57,1,51,142,128,143,41,113,135,144,
120,144,27,14,206,235,126,162,60,60,162,130,100,84,240,96,123,59,177,171,
103,112,116,99,227,201,2,225,221,88,95,22,11,127,149,1,23,159,110,154,132,
125,143,1,31,135,113,41,221,195,95,118,118,95,6,47,237,101,110,29,146,37,
182,164,106,154,54,43,156,114,178,201,0,1,0,113,254,20,10,2,3,129,0,70,0,
0,1,34,21,20,22,23,53,33,50,54,53,17,51,22,21,20,22,51,50,54,53,17,51,22,
21,20,22,51,50,54,53,17,51,22,21,20,6,35,34,38,39,6,6,35,34,38,39,6,6,35,
34,39,21,34,21,20,22,23,7,38,38,53,52,54,55,38,38,53,52,54,51,2,29,240,52,
57,1,49,142,128,143,41,113,135,144,120,144,41,111,137,144,120,143,41,206,
234,125,161,62,60,165,130,124,160,58,60,162,130,100,84,240,96,123,59,177,
171,103,112,116,99,227,201,2,225,221,89,96,20,11,127,151,1,21,159,108,156,
132,125,143,1,31,187,86,154,128,125,143,1,31,179,110,221,195,92,121,117,96,
96,117,118,95,6,47,237,101,110,29,146,37,182,164,106,154,54,43,156,114,178,
201,0,0,1,0,102,255,35,5,236,3,129,0,46,0,0,1,50,22,21,20,22,51,50,54,53,
53,51,22,21,20,6,35,34,38,53,52,38,35,34,6,21,20,18,23,35,38,2,39,2,7,35,
54,18,53,52,38,39,51,22,22,23,18,3,18,141,150,61,58,72,65,142,41,159,161,
140,153,64,53,98,94,104,117,180,87,115,11,34,114,172,71,77,77,69,175,54,81,
8,51,3,129,133,125,62,63,88,90,185,141,77,142,152,125,116,72,80,195,211,160,
254,238,139,94,1,9,165,254,222,234,157,1,109,172,121,221,62,45,203,123,1,
135,0,0,1,0,76,254,20,4,246,3,111,0,39,0,0,1,20,22,22,51,50,54,54,53,53,51,
22,21,20,6,6,35,34,39,22,23,33,21,33,22,22,23,35,38,38,39,35,21,35,17,33,
38,53,17,51,2,80,46,98,93,87,88,38,144,41,75,168,148,166,78,5,9,2,152,253,
127,28,110,112,168,101,124,33,195,182,1,96,18,182,3,98,145,169,77,37,85,97,
185,152,88,127,135,62,99,188,66,160,136,222,134,97,231,164,205,1,109,171,
230,1,62,0,0,1,0,113,254,20,2,29,3,129,0,24,0,0,1,34,21,20,22,23,21,34,21,
20,22,23,7,38,38,53,52,54,55,38,38,53,52,54,51,2,29,240,101,139,240,96,123,
59,177,171,103,112,116,99,227,201,2,225,221,120,98,7,160,237,101,110,29,146,
37,182,164,106,154,54,43,156,114,178,201,0,0,1,0,113,254,20,2,29,3,131,0,
24,0,0,1,53,38,53,52,55,38,38,53,52,54,51,21,34,21,20,22,23,21,34,21,20,22,
23,17,1,82,225,215,116,99,226,202,240,105,135,240,98,121,254,20,226,87,191,
174,82,41,143,103,161,183,160,196,109,90,4,137,185,78,83,23,254,186,0,0,1,
0,174,255,14,6,59,3,109,0,41,0,0,5,50,54,53,52,38,39,51,22,22,21,16,2,35,
34,2,17,53,55,6,35,34,38,39,17,35,17,51,21,20,22,51,50,54,54,55,51,6,6,21,
20,22,4,98,146,145,25,38,180,35,30,235,238,238,235,2,60,77,43,87,28,182,182,
77,87,55,60,44,36,180,37,27,145,94,233,246,123,213,156,132,224,144,254,194,
254,211,1,45,1,62,63,58,39,38,38,253,12,4,74,89,93,87,38,94,137,153,210,129,
246,233,0,1,0,174,254,20,6,59,3,111,0,65,0,0,19,51,21,20,22,51,50,54,54,55,
51,6,6,21,20,22,51,32,17,52,38,39,51,22,22,21,16,33,32,17,53,55,6,35,34,38,
39,17,16,18,51,50,54,55,54,54,51,50,22,21,20,7,35,53,52,38,35,34,6,7,6,35,
34,38,2,17,174,182,78,86,55,60,44,36,180,36,28,145,146,1,35,26,37,180,35,
30,254,39,254,39,2,60,77,43,87,28,110,114,53,88,65,57,130,80,110,137,20,139,
63,54,50,96,61,118,132,144,168,81,3,111,88,94,87,38,94,137,137,196,122,162,
170,1,76,115,197,143,123,212,132,254,43,1,192,57,52,39,38,38,254,217,254,
215,254,225,39,50,45,44,133,104,39,52,56,60,63,44,45,90,149,1,67,1,10,0,0,
1,255,205,0,0,6,66,3,131,0,34,0,0,37,20,6,35,33,53,33,50,53,52,38,39,46,2,
53,52,38,35,34,7,39,54,54,51,50,22,21,20,22,22,23,30,2,6,66,159,151,252,90,
3,170,123,171,177,148,153,63,158,141,184,220,55,91,237,118,246,238,44,125,
162,165,158,69,193,92,101,150,49,40,77,44,37,66,81,79,69,58,80,135,43,51,
104,115,60,50,44,39,46,75,94,0,1,255,205,254,20,6,66,3,131,0,38,0,0,37,20,
6,35,33,17,35,17,33,53,33,50,53,52,38,39,46,2,53,52,38,35,34,7,39,54,54,51,
50,22,21,20,22,22,23,30,2,6,66,159,151,254,84,182,254,188,3,170,123,171,177,
148,153,63,158,141,184,220,55,91,237,118,246,238,44,125,162,165,158,69,193,
92,101,254,20,1,236,150,49,40,77,44,37,66,81,79,69,58,80,135,43,51,104,115,
60,50,44,39,46,75,94,0,0,1,0,41,0,186,2,137,3,109,0,14,0,0,19,51,50,54,53,
17,51,22,22,21,20,6,35,34,39,41,164,142,118,143,19,22,213,227,93,75,1,80,
121,139,1,25,81,176,57,194,183,21,0,1,0,41,254,168,3,78,3,109,0,16,0,0,19,
33,50,54,53,17,51,22,21,20,6,7,17,35,17,38,39,41,1,47,174,144,143,41,196,
212,182,107,108,1,80,119,141,1,25,205,109,179,181,15,253,236,2,18,3,18,0,
1,0,41,255,35,1,176,3,109,0,14,0,0,19,22,18,21,20,6,6,7,35,54,18,53,52,2,
39,225,90,117,37,72,110,172,118,91,122,85,3,109,72,254,255,116,104,176,176,
197,214,1,40,143,101,1,12,76,0,1,0,74,255,74,3,193,3,188,0,26,0,0,1,50,54,
53,52,38,39,55,22,22,21,20,6,35,34,39,22,21,21,35,53,52,38,39,55,22,22,2,
55,102,109,73,68,147,82,95,198,196,83,60,68,189,108,121,116,84,198,1,66,101,
93,81,183,86,90,93,240,111,160,180,33,94,170,123,123,127,222,113,125,97,109,
0,0,2,0,74,254,20,2,100,3,129,0,13,0,23,0,0,19,18,55,36,17,52,54,51,50,22,
21,20,2,7,3,20,23,55,55,52,38,35,34,6,88,230,65,254,203,144,114,138,142,192,
160,4,166,2,6,51,47,31,45,254,20,1,143,249,231,1,10,108,136,191,190,222,253,
214,232,4,125,176,131,19,104,132,143,41,0,1,0,113,255,14,6,66,5,55,0,49,0,
0,5,34,38,53,52,54,55,54,54,53,52,38,39,51,22,22,21,20,6,7,6,6,21,20,22,51,
50,54,53,52,38,39,51,30,3,51,50,54,53,53,51,22,21,16,33,34,39,2,2,37,211,
225,55,61,65,50,54,46,180,39,51,52,57,59,51,137,125,136,136,25,38,180,51,
47,62,83,56,92,80,144,41,254,172,158,92,6,242,232,217,105,202,122,134,164,
82,98,181,40,45,174,102,97,190,121,122,185,90,145,158,233,246,123,213,156,
225,122,75,35,133,143,181,156,80,254,131,105,253,161,0,1,0,164,254,20,6,12,
3,111,0,66,0,0,55,52,18,55,51,6,21,20,51,50,54,53,17,51,22,21,20,22,51,50,
54,53,17,51,22,21,20,6,35,34,38,39,6,6,35,34,39,23,22,21,20,22,51,50,54,55,
54,54,51,50,22,21,20,7,35,53,52,38,35,34,6,7,6,6,35,34,2,164,59,43,172,73,
198,122,103,144,41,83,107,109,92,143,41,173,199,123,137,35,41,143,124,170,
73,5,11,125,141,44,90,91,76,144,82,152,177,20,139,96,91,56,105,83,76,133,
71,231,203,166,241,1,103,113,211,150,194,123,145,1,31,187,86,153,129,121,
147,1,31,179,110,220,196,103,110,114,99,111,46,95,66,221,199,38,62,51,48,
137,123,31,58,37,87,75,43,56,53,47,1,46,0,1,0,174,254,20,5,229,3,111,0,39,
0,0,37,34,39,23,22,21,17,35,17,51,22,21,20,22,51,50,54,53,17,51,22,21,20,
22,51,50,54,53,17,51,22,21,20,6,35,34,38,39,6,6,2,49,154,67,5,11,182,143,
41,86,103,109,94,143,41,84,104,111,92,143,41,176,196,120,130,45,43,124,174,
111,46,95,66,253,198,5,91,159,110,155,131,121,145,1,33,187,88,152,128,123,
143,1,33,174,117,222,192,87,106,107,86,0,0,1,0,113,255,37,4,193,3,131,0,33,
0,0,1,50,22,21,20,22,51,50,54,53,53,51,22,21,20,6,35,34,38,53,52,38,35,34,
6,21,20,18,23,35,38,17,16,18,1,231,141,150,61,58,72,65,142,41,159,161,140,
153,64,53,98,94,103,110,180,215,181,3,131,133,125,62,63,88,90,185,141,76,
143,152,125,116,73,79,195,211,165,254,234,130,233,1,84,1,26,1,7,0,0,1,0,20,
255,35,4,100,3,129,0,33,0,0,1,20,6,6,35,33,53,51,54,54,53,52,38,38,35,34,
7,39,54,51,50,18,21,20,6,7,33,50,54,53,17,51,22,18,4,100,102,211,188,253,
204,64,77,70,37,64,36,40,34,39,60,74,143,156,66,76,1,56,166,153,143,15,24,
1,98,208,251,116,139,81,219,147,110,174,94,16,143,27,254,242,244,149,223,
93,188,211,2,48,91,254,205,0,0,2,0,20,254,20,4,49,3,131,0,43,0,57,0,0,1,54,
53,16,35,34,6,7,6,35,34,38,53,52,55,55,38,38,53,52,54,51,50,22,21,20,14,2,
21,20,51,50,62,4,51,50,22,21,20,7,1,20,22,23,62,3,53,52,38,35,34,6,3,115,
8,103,24,38,54,80,148,94,112,43,22,151,132,144,115,139,145,48,57,48,53,25,
38,37,44,60,83,59,126,138,10,252,164,82,80,1,6,7,6,57,49,31,45,254,20,112,
48,1,13,40,88,128,123,100,107,110,61,113,227,133,108,136,196,185,87,162,147,
134,60,96,39,59,68,59,39,219,190,91,88,4,127,94,144,63,5,27,35,36,14,127,
148,41,0,1,0,174,254,229,4,6,3,111,0,21,0,0,1,20,22,22,51,50,54,53,17,51,
22,22,21,20,6,35,34,39,17,35,17,51,1,100,38,93,97,144,118,143,19,22,205,227,
156,86,182,182,2,68,121,96,41,121,143,1,37,86,187,49,197,188,88,253,225,4,
138,0,0,1,0,113,254,20,5,143,3,111,0,50,0,0,5,52,35,34,6,7,6,6,35,34,2,17,
52,18,55,51,21,20,22,22,51,50,54,53,53,51,22,22,21,20,6,35,34,38,39,6,21,
16,18,51,50,55,54,54,51,50,22,21,20,7,35,4,219,162,71,74,16,22,179,131,243,
232,42,60,172,47,103,94,121,98,143,18,23,188,205,141,167,26,12,145,140,137,
28,21,176,139,162,180,41,139,201,191,87,108,135,152,1,75,1,87,163,1,58,220,
45,158,181,83,109,138,220,64,145,35,194,179,124,132,105,210,254,243,254,236,
186,136,159,183,167,74,123,0,0,2,0,102,0,0,5,207,3,131,0,27,0,38,0,0,1,34,
36,39,22,21,20,6,7,35,54,54,53,52,38,39,51,22,22,23,54,36,51,50,22,21,20,
6,3,34,6,7,22,51,50,54,53,52,38,4,8,163,254,181,114,8,79,79,172,70,78,70,
76,191,37,143,96,71,1,12,167,187,223,255,163,122,185,39,152,155,124,151,122,
1,55,114,95,45,41,126,208,100,99,224,111,134,207,104,79,147,57,144,159,161,
130,133,164,1,183,121,109,59,83,64,66,76,0,1,0,113,255,16,4,94,5,57,0,34,
0,0,5,38,38,53,52,54,55,54,54,53,52,38,39,51,22,21,20,6,7,6,6,21,20,22,51,
32,17,52,38,39,51,22,17,16,0,2,88,239,248,91,90,96,85,78,63,190,121,85,90,
92,83,162,153,1,70,50,75,180,127,254,251,240,2,232,215,105,209,115,123,173,
84,92,173,54,138,183,97,193,118,123,184,90,143,160,1,151,136,248,180,248,
254,205,254,234,254,226,0,2,252,205,254,20,2,207,3,133,0,21,0,30,0,0,19,50,
62,2,53,53,38,38,53,52,54,54,51,50,18,17,16,4,33,33,53,1,20,22,23,38,38,35,
34,6,68,124,175,112,58,225,199,74,124,78,162,168,254,200,254,205,252,105,
4,90,119,116,20,76,45,35,59,254,170,41,75,125,115,158,8,147,156,106,201,111,
254,66,254,86,254,245,254,150,3,66,80,81,9,208,222,158,0,1,0,164,255,135,
3,242,6,20,0,35,0,0,19,16,18,51,50,23,21,38,35,32,17,20,22,51,50,55,55,54,
51,50,22,21,20,7,35,54,53,16,35,34,6,7,6,35,34,38,164,208,218,97,61,65,71,
254,246,23,30,40,43,40,83,140,126,139,29,176,22,102,24,38,54,80,148,119,98,
2,156,1,187,1,189,24,146,21,253,35,171,179,69,63,132,220,190,166,133,132,
149,1,12,40,88,128,239,0,0,2,0,102,254,20,6,96,3,131,0,56,0,67,0,0,19,52,
38,39,51,22,22,23,62,2,51,50,22,21,20,6,35,34,36,39,22,21,20,7,6,21,16,51,
50,54,55,54,51,50,22,21,20,6,7,35,54,54,53,52,35,34,6,7,6,35,34,38,53,52,
55,54,1,34,6,7,22,51,50,54,53,52,38,248,70,76,191,37,143,96,38,163,203,102,
187,223,255,200,163,254,181,114,8,18,19,238,61,132,93,177,161,186,191,44,
25,177,28,36,211,63,132,83,167,169,216,198,6,31,3,51,110,203,33,152,155,124,
151,122,1,178,134,207,104,79,147,57,78,142,83,161,130,133,164,114,95,45,41,
37,137,137,33,254,219,62,68,130,163,152,57,138,39,51,99,61,179,64,66,130,
227,241,23,44,227,1,94,138,92,59,83,64,66,76,0,2,0,133,255,14,4,156,3,131,
0,24,0,36,0,0,37,18,51,50,54,53,17,51,17,16,0,33,34,2,17,52,54,54,51,50,22,
21,20,6,35,39,21,23,51,50,54,53,52,38,35,34,6,1,78,65,209,195,194,183,254,
227,254,225,233,242,76,132,79,133,156,140,141,113,2,91,65,53,53,51,51,56,
193,254,225,235,246,1,236,254,12,254,194,254,209,1,83,1,69,137,219,121,253,
218,124,111,217,38,40,52,48,152,166,179,0,2,0,133,255,14,4,156,6,20,0,11,
0,46,0,0,1,21,23,51,50,54,53,52,38,35,34,6,5,16,0,33,34,2,17,52,54,54,51,
50,22,21,20,6,35,35,18,51,50,18,17,16,2,38,35,34,7,53,54,51,50,22,18,1,59,
2,91,65,53,53,51,51,56,3,97,254,233,254,219,233,242,76,132,79,133,156,140,
141,94,65,209,201,188,51,112,103,70,65,61,97,168,179,79,1,154,38,40,52,48,
152,166,179,94,254,148,254,157,1,83,1,69,137,219,121,253,218,124,111,254,
227,1,18,1,39,1,109,1,135,174,21,146,24,204,254,54,0,0,1,250,20,254,20,1,
195,3,111,0,25,0,0,1,6,6,21,20,30,2,21,20,4,33,33,53,33,50,54,53,52,46,2,
53,52,54,55,1,174,39,20,25,30,25,254,204,254,197,250,192,5,31,240,227,23,
28,23,30,38,3,111,123,128,93,90,145,130,128,73,223,238,150,162,168,56,114,
130,155,98,75,150,113,0,0,2,0,133,255,14,8,23,4,106,0,53,0,64,0,0,5,34,2,
17,52,54,54,51,50,22,21,20,6,35,35,22,22,51,50,54,53,17,51,17,16,51,50,54,
53,52,46,2,53,52,18,55,23,34,6,21,20,30,2,21,20,6,35,34,38,39,6,6,1,51,50,
54,53,52,38,35,34,6,21,2,72,226,225,76,132,79,133,156,140,141,98,24,134,104,
162,141,182,234,117,131,23,27,22,252,231,101,196,206,22,27,23,232,211,119,
153,59,70,171,254,101,93,65,53,53,51,51,56,242,1,71,1,81,137,219,121,253,
218,124,111,143,144,229,250,1,238,253,172,254,137,156,139,61,107,101,100,
55,219,1,12,16,133,185,181,50,92,100,116,74,206,235,99,114,115,98,2,62,52,
48,152,166,179,161,0,1,0,102,254,20,2,18,3,129,0,24,0,0,19,50,22,21,20,6,
7,22,22,21,20,6,7,39,54,54,53,52,35,53,54,54,53,52,35,102,201,227,99,116,
113,102,171,177,59,126,93,240,137,103,240,3,129,202,177,114,156,43,54,154,
106,164,182,37,146,30,110,100,237,160,6,97,122,221,0,1,0,20,255,14,5,78,3,
109,0,39,0,0,1,51,17,16,33,50,54,53,52,46,2,53,52,55,51,6,6,21,20,30,2,21,
20,6,35,34,38,17,53,6,35,34,39,53,51,50,54,53,1,166,180,1,23,144,151,23,27,
22,72,182,32,40,22,27,23,253,239,220,224,86,137,92,87,175,121,106,3,109,253,
174,254,137,168,155,58,96,92,93,55,126,126,51,142,55,50,90,94,103,63,224,
247,250,1,12,101,82,20,129,154,174,0,1,0,102,254,20,2,18,3,131,0,25,0,0,19,
17,54,54,53,52,35,53,54,54,53,52,35,53,50,22,21,20,6,7,22,22,21,20,7,21,123,
123,96,240,135,105,240,201,227,99,116,100,115,225,254,20,1,70,23,84,77,185,
137,4,89,110,196,160,182,162,103,143,41,38,121,97,191,87,226,0,0,1,0,174,
255,35,1,100,3,109,0,3,0,0,5,35,17,51,1,100,182,182,221,4,74,0,0,1,255,154,
254,20,2,141,6,20,0,17,0,0,3,51,22,18,18,17,16,18,22,23,35,38,2,2,17,16,2,
38,102,170,116,124,59,44,109,133,168,118,127,56,46,115,6,20,119,254,251,254,
155,255,0,254,206,254,177,250,164,113,1,17,1,125,1,30,1,42,1,60,233,0,0,1,
0,76,254,20,7,39,3,111,0,56,0,0,33,35,21,35,17,33,38,17,17,51,21,20,22,51,
50,54,54,53,53,51,22,22,21,20,22,51,50,54,54,53,53,51,22,21,20,6,6,35,34,
38,39,14,2,35,34,39,20,23,33,21,33,22,22,23,35,38,1,184,182,182,1,92,14,182,
105,126,82,89,40,144,17,24,109,108,86,87,38,143,41,79,170,140,98,166,48,36,
70,105,77,157,93,16,2,166,253,109,31,119,102,168,209,205,1,109,123,1,22,1,
62,13,197,153,32,70,76,185,38,118,43,75,79,29,65,74,185,141,76,114,121,60,
61,59,52,46,22,67,150,124,160,132,237,123,200,0,0,2,0,41,0,172,3,84,6,20,
0,25,0,36,0,0,19,51,18,18,51,50,23,21,38,35,34,2,21,51,50,22,21,20,6,6,35,
34,38,38,39,35,33,20,22,22,51,50,54,53,52,38,35,41,135,11,218,195,97,61,65,
70,118,149,193,146,157,101,156,83,93,151,88,6,133,1,59,43,74,41,56,100,71,
58,3,111,1,56,1,109,24,146,21,254,223,239,128,126,104,222,127,140,255,172,
111,194,112,188,111,49,69,0,0,2,0,41,255,23,3,84,6,20,0,36,0,47,0,0,19,51,
18,18,51,50,23,21,38,35,34,2,21,51,50,22,21,20,6,6,7,6,6,21,20,22,23,7,38,
38,53,52,55,38,2,39,35,33,20,22,22,51,50,54,53,52,38,35,41,135,11,218,195,
97,61,65,70,118,149,193,146,157,73,125,72,16,27,85,66,51,116,136,31,109,128,
7,133,1,59,43,74,41,56,100,71,58,3,111,1,56,1,109,24,146,21,254,223,239,128,
126,86,190,142,25,15,55,28,70,116,19,112,20,162,125,66,50,50,1,32,211,111,
194,112,188,111,49,69,0,0,1,0,20,254,229,6,39,3,129,0,45,0,0,5,34,0,39,38,
35,34,6,21,20,23,7,38,53,52,54,51,50,23,54,0,33,50,23,7,38,38,35,32,4,21,
20,22,51,50,55,54,51,50,23,21,38,35,34,7,6,3,139,240,254,230,12,51,58,63,
54,25,121,31,121,113,62,59,26,1,131,1,68,248,215,64,107,190,102,254,236,254,
235,178,166,90,107,107,63,113,87,80,130,47,111,112,242,1,16,242,31,61,45,
50,53,31,59,77,97,114,25,243,1,13,86,147,45,39,213,220,192,215,17,16,60,164,
72,15,16,0,1,255,242,254,20,7,211,3,111,0,66,0,0,1,16,2,7,35,54,54,18,53,
17,51,22,22,21,20,22,51,50,54,53,53,51,22,22,21,20,22,51,50,54,54,55,51,6,
6,21,20,22,51,50,54,53,52,38,39,51,22,22,21,16,2,35,34,2,17,53,55,6,35,34,
39,6,6,35,34,39,22,1,100,97,105,168,82,75,31,143,19,22,56,71,72,61,142,16,
25,66,61,54,60,45,35,181,37,27,145,146,145,146,27,37,180,39,27,235,238,239,
234,2,55,82,155,52,22,95,94,115,49,16,1,61,254,239,254,125,149,154,226,1,
20,198,2,5,28,79,29,77,66,79,87,113,27,91,34,55,62,38,94,137,153,210,129,
246,233,233,246,128,209,155,149,227,124,254,194,254,211,1,45,1,62,63,58,49,
157,78,79,110,152,0,0,1,0,113,254,213,4,41,5,236,0,38,0,0,1,22,22,21,20,6,
7,6,6,21,16,33,50,54,53,52,39,39,51,22,22,21,20,2,7,17,35,17,38,38,53,52,
55,54,54,53,52,39,39,1,147,14,23,31,41,42,31,1,6,163,163,54,30,180,55,31,
208,204,182,183,175,79,42,36,24,8,5,236,29,111,49,72,145,114,114,146,72,254,
147,219,201,220,211,120,191,234,130,249,254,232,26,254,53,1,201,21,255,240,
161,194,104,136,62,93,65,27,0,1,255,205,0,193,2,20,6,20,0,15,0,0,3,54,51,
50,22,18,17,21,35,53,16,2,38,35,34,7,51,61,96,168,178,80,182,51,112,103,70,
65,5,252,24,244,253,203,253,252,38,38,1,207,1,237,220,21,0,2,255,205,254,
20,4,70,6,20,0,32,0,44,0,0,19,34,7,53,54,51,50,22,19,54,51,50,22,21,20,6,
35,34,39,22,21,16,2,33,53,50,54,54,53,16,2,39,2,1,52,38,35,34,6,21,20,22,
51,50,54,84,70,65,61,96,172,187,39,89,142,162,197,192,165,93,75,4,254,254,
226,134,151,73,46,40,58,2,163,105,82,87,101,105,85,88,97,5,127,21,146,24,
253,254,227,100,217,178,163,193,49,100,105,254,150,254,171,150,114,241,198,
1,9,1,229,182,1,8,253,92,103,135,104,99,109,141,112,0,0,1,0,20,255,35,4,100,
3,129,0,34,0,0,19,54,51,50,22,22,21,16,7,33,50,54,53,52,38,39,51,22,18,21,
16,0,33,33,53,51,54,54,53,52,38,38,35,34,7,20,60,74,93,146,80,182,1,22,192,
181,92,121,180,116,99,254,249,254,222,254,0,64,88,80,41,72,45,40,34,3,102,
27,124,232,158,254,251,204,193,213,154,253,146,128,254,249,162,254,230,254,
249,139,80,220,147,114,172,92,16,0,0,1,255,154,254,20,2,141,6,20,0,17,0,0,
19,35,54,54,18,17,16,18,18,55,51,6,6,2,17,16,2,2,66,168,132,108,46,59,125,
115,170,118,120,48,56,127,254,20,161,249,1,76,1,57,1,0,1,101,1,6,118,138,
237,254,196,254,208,254,230,254,129,254,238,0,0,1,0,41,255,14,6,207,3,109,
0,50,0,0,19,34,39,53,51,50,54,53,53,51,22,22,21,20,22,51,50,54,54,55,51,6,
6,21,20,22,51,50,54,53,52,38,39,51,22,22,21,16,2,35,34,2,17,53,55,6,35,34,
39,6,6,244,111,92,184,71,62,142,16,25,66,61,54,60,45,35,180,37,26,145,146,
145,146,27,37,180,39,27,235,238,239,234,2,55,82,155,52,22,95,1,193,20,129,
79,87,113,27,91,34,55,62,38,94,137,155,211,126,246,233,233,246,128,209,155,
149,227,124,254,194,254,211,1,45,1,62,63,58,49,157,78,79,0,0,2,0,133,255,
14,6,252,3,131,0,40,0,52,0,0,5,34,2,17,52,54,54,51,50,22,21,20,6,35,35,18,
51,50,54,53,17,51,17,16,51,50,17,52,38,39,51,22,17,16,2,35,34,38,39,6,6,1,
21,23,51,50,54,53,52,38,35,34,6,2,96,233,242,76,132,79,133,156,140,141,94,
65,209,166,166,182,238,246,52,73,180,127,210,206,133,180,37,61,194,254,60,
2,91,65,53,53,51,51,56,242,1,83,1,69,137,219,121,253,218,124,111,254,225,
175,163,2,121,253,133,254,176,1,151,140,249,175,248,254,205,254,234,254,226,
111,106,115,102,2,140,38,40,52,48,152,166,179,0,2,0,74,255,16,8,135,3,131,
0,61,0,69,0,0,23,18,19,38,38,53,52,54,51,50,22,23,54,54,53,53,51,22,22,21,
20,51,50,54,55,54,55,51,6,6,21,20,22,51,50,54,53,52,38,39,51,22,22,21,16,
2,35,34,2,17,55,6,6,35,34,38,39,6,6,7,2,3,3,20,23,38,38,35,34,6,211,179,30,
164,182,135,113,130,146,4,111,86,141,21,20,106,87,82,32,3,12,180,37,27,145,
146,146,145,27,37,181,35,30,235,238,238,235,4,28,80,66,62,99,21,21,141,127,
31,182,137,180,3,57,44,31,45,219,1,69,1,5,23,150,115,109,135,205,196,2,98,
131,150,48,115,40,158,117,182,21,41,153,210,129,246,233,233,246,128,209,155,
132,224,144,254,194,254,211,1,45,1,62,80,57,44,72,86,76,77,5,254,225,254,
222,3,110,122,29,116,126,41,0,1,0,143,254,20,8,33,3,111,0,75,0,0,1,32,37,
21,4,33,32,0,17,16,19,51,6,21,20,22,51,50,54,53,53,51,22,22,21,20,22,51,50,
54,55,55,51,6,6,21,20,22,51,50,54,53,52,38,39,51,22,22,21,20,6,35,34,38,53,
55,6,6,35,34,38,39,6,6,35,34,39,7,21,20,23,37,23,5,22,4,3,227,1,135,1,99,
254,154,254,118,254,84,254,94,82,172,30,64,77,96,72,141,21,20,69,58,87,82,
32,14,180,37,26,144,147,146,144,25,38,180,39,27,235,238,239,234,4,28,80,66,
76,109,18,23,125,110,105,71,2,24,2,62,20,253,230,77,1,37,254,172,86,158,80,
1,108,1,124,1,75,1,40,114,89,81,77,86,125,150,48,115,40,72,86,117,182,62,
155,211,126,179,169,169,179,123,212,157,149,227,124,251,237,237,251,80,57,
44,85,73,86,72,84,80,83,121,99,78,149,70,133,125,0,2,0,133,255,14,6,55,3,
131,0,43,0,55,0,0,5,50,54,17,17,51,22,22,21,20,22,51,50,54,53,53,51,22,22,
21,20,6,35,34,39,21,16,2,33,34,2,17,52,54,54,51,50,22,21,20,6,35,35,18,3,
21,23,51,50,54,53,52,38,35,34,6,2,96,188,160,142,17,24,74,59,72,65,141,18,
23,159,160,79,54,254,254,235,233,242,76,132,79,133,156,140,141,94,65,84,2,
91,65,53,53,51,51,56,94,225,1,0,1,236,38,118,41,74,92,88,90,185,54,123,40,
142,153,43,31,254,182,254,221,1,83,1,69,137,219,121,253,218,124,111,254,225,
1,248,38,40,52,48,152,166,179,0,2,1,129,1,229,3,27,3,109,0,11,0,23,0,0,1,
20,6,35,34,38,53,52,54,51,50,22,7,52,38,35,34,6,21,20,22,51,50,54,3,27,113,
94,94,109,110,93,94,113,72,76,59,59,76,70,65,60,75,2,172,92,107,105,92,91,
104,107,88,63,72,72,63,63,72,72,0,3,0,113,0,82,3,164,3,16,0,11,0,23,0,35,
0,0,37,52,54,51,50,22,21,20,6,35,34,38,1,52,54,51,50,22,21,20,6,35,34,38,
37,52,54,51,50,22,21,20,6,35,34,38,1,164,59,45,45,56,56,45,45,59,1,51,59,
45,45,56,56,45,45,59,253,154,59,45,45,55,55,45,45,59,178,48,50,50,48,46,50,
50,2,40,48,52,51,47,46,52,51,45,48,52,51,47,46,52,51,0,0,3,0,113,255,188,
5,61,3,219,0,11,0,23,0,35,0,0,37,52,54,51,50,22,21,20,6,35,34,38,1,52,54,
51,50,22,21,20,6,35,34,38,37,52,54,51,50,22,21,20,6,35,34,38,2,61,88,68,68,
84,84,68,69,87,1,205,88,68,68,83,83,68,68,88,252,103,85,70,68,84,84,68,69,
86,78,70,79,76,71,69,79,81,3,57,70,79,76,71,69,77,79,65,69,80,76,71,69,77,
79,0,0,3,0,113,254,254,6,215,4,123,0,11,0,23,0,35,0,0,5,52,54,51,50,22,21,
20,6,35,34,38,1,52,54,51,50,22,21,20,6,35,34,38,37,52,54,51,50,22,21,20,6,
35,34,38,2,215,113,94,94,109,110,93,94,113,2,102,113,94,94,109,112,91,91,
116,251,52,112,94,94,109,112,91,93,113,66,92,107,105,91,91,104,107,4,75,92,
107,105,92,93,101,105,87,91,108,105,92,93,101,106,0,0,3,0,113,255,14,6,215,
4,139,0,11,0,23,0,35,0,0,1,20,6,35,34,38,53,52,54,51,50,22,1,20,6,35,34,38,
53,52,54,51,50,22,5,20,6,35,34,38,53,52,54,51,50,22,4,113,113,94,94,109,112,
91,93,114,253,153,113,94,93,109,110,92,94,113,4,205,113,94,94,109,110,93,
94,113,3,203,92,107,105,92,93,101,105,251,179,92,107,106,91,91,104,107,86,
92,107,105,92,91,104,107,0,6,0,113,255,14,6,215,4,139,0,11,0,23,0,35,0,47,
0,59,0,71,0,0,5,52,54,51,50,22,21,20,6,35,34,38,55,20,22,51,50,54,53,52,38,
35,34,6,1,52,54,51,50,22,21,20,6,35,34,38,55,20,22,51,50,54,53,52,38,35,34,
6,5,52,54,51,50,22,21,20,6,35,34,38,55,20,22,51,50,54,53,52,38,35,34,6,2,
215,113,94,94,109,110,93,94,113,72,76,59,59,76,70,65,60,75,2,30,114,93,93,
110,110,93,92,115,72,76,59,59,76,70,65,60,75,250,236,111,95,93,110,110,93,
93,113,71,76,59,61,75,70,66,60,75,49,92,107,105,92,91,104,107,88,63,72,72,
63,63,72,72,3,181,91,107,104,92,91,104,107,88,63,73,73,63,63,72,72,65,90,
108,104,92,91,104,108,87,61,75,75,61,63,72,72,0,6,0,113,255,14,6,215,4,139,
0,11,0,23,0,35,0,47,0,59,0,71,0,0,1,20,6,35,34,38,53,52,54,51,50,22,7,52,
38,35,34,6,21,20,22,51,50,54,1,20,6,35,34,38,53,52,54,51,50,22,7,52,38,35,
34,6,21,20,22,51,50,54,37,20,6,35,34,38,53,52,54,51,50,22,7,52,38,35,34,6,
21,20,22,51,50,54,4,113,113,94,94,109,112,91,93,114,72,76,59,59,76,70,65,
60,75,253,225,113,94,93,109,110,92,94,113,71,76,60,58,77,70,65,60,76,5,20,
113,94,94,109,110,93,94,113,72,76,59,59,76,70,65,60,75,3,203,92,107,105,92,
93,101,105,89,63,72,72,63,63,72,72,252,75,92,107,106,91,91,104,107,88,61,
74,72,63,63,72,72,65,92,107,105,92,91,104,107,88,63,72,72,63,63,72,72,0,0,
1,0,41,255,14,11,96,3,109,0,105,0,0,1,30,3,21,16,2,35,34,2,17,52,54,55,6,
35,34,39,22,22,21,16,2,35,34,2,17,52,54,55,6,35,34,39,6,6,35,34,39,53,51,
50,54,53,53,51,30,3,21,20,22,51,50,62,2,55,51,14,3,21,20,22,51,50,54,53,52,
46,2,39,51,22,22,23,22,22,51,50,62,2,55,51,14,3,21,20,22,51,50,54,53,52,46,
2,39,11,30,20,25,15,6,235,238,239,234,2,1,55,83,51,39,1,1,235,238,239,234,
2,1,55,83,155,52,22,95,94,109,94,184,72,61,142,7,15,12,7,66,61,41,55,41,35,
22,180,19,25,14,5,145,146,145,146,6,14,25,19,180,17,22,6,14,59,42,41,55,41,
35,22,180,19,25,14,5,145,146,145,146,6,14,25,19,3,109,75,127,118,116,64,254,
194,254,211,1,44,1,63,35,57,29,49,16,21,44,23,254,194,254,211,1,44,1,63,35,
57,29,49,157,78,79,20,129,78,88,113,12,39,43,42,16,55,62,19,57,106,87,79,
124,112,111,66,246,233,233,246,67,111,111,123,80,57,103,51,28,30,19,57,106,
87,79,124,112,111,66,246,233,233,246,67,111,111,123,80,0,0,1,0,174,254,229,
11,134,3,111,0,95,0,0,1,30,3,21,16,2,35,34,2,17,52,54,55,6,35,34,39,22,22,
21,16,2,35,34,38,39,6,35,34,39,17,35,17,51,17,20,30,2,51,50,62,2,55,54,54,
55,51,14,3,21,20,22,51,50,54,53,52,46,2,39,51,22,22,23,22,22,51,50,62,2,55,
51,14,3,21,20,22,51,50,54,53,52,46,2,39,11,68,20,25,15,6,235,238,239,234,
2,1,55,83,51,39,1,1,235,238,206,230,28,95,151,157,85,182,182,10,45,92,81,
51,84,65,43,10,3,26,34,180,19,25,14,5,145,146,145,146,6,14,25,19,180,17,22,
6,14,59,42,41,55,41,35,22,180,19,25,14,5,145,146,145,146,6,14,25,19,3,109,
75,127,118,116,64,254,194,254,211,1,44,1,63,35,57,29,49,16,21,44,23,254,194,
254,211,221,233,40,88,253,225,4,138,254,213,68,97,63,30,16,39,64,47,77,197,
115,79,124,112,111,66,246,233,233,246,67,111,111,123,80,57,103,51,28,30,19,
57,106,87,79,124,112,111,66,246,233,233,246,67,111,111,123,80,0,0,2,0,102,
255,14,11,7,3,131,0,116,0,127,0,0,37,30,3,51,50,54,53,52,46,2,39,51,30,3,
21,20,22,51,50,62,2,55,51,14,3,21,20,22,51,50,54,53,52,46,2,39,51,30,3,21,
16,2,35,34,2,17,52,54,53,6,35,34,38,39,21,20,14,2,35,34,38,39,46,3,39,14,
3,7,35,54,54,53,52,46,2,39,51,30,5,23,38,52,53,52,62,2,51,50,30,2,21,20,6,
35,39,51,50,54,53,52,38,35,34,6,21,2,255,16,57,76,93,52,195,177,2,3,3,2,157,
7,15,10,7,68,61,41,55,41,35,22,180,19,25,14,5,145,146,145,146,6,14,25,19,
180,20,25,15,6,235,238,239,234,2,55,82,35,65,29,71,139,208,137,200,242,35,
32,57,45,30,5,4,15,30,50,39,172,70,78,17,35,55,39,191,10,28,38,46,54,62,34,
1,46,79,104,58,66,107,75,41,140,141,113,93,66,52,53,51,51,56,193,72,107,72,
36,235,246,66,143,132,113,36,12,39,43,42,16,55,62,19,57,106,87,79,124,112,
111,66,246,233,233,246,67,111,111,123,80,75,127,118,116,64,254,194,254,211,
1,45,1,62,31,61,29,49,15,17,75,169,245,158,76,232,226,16,45,46,42,14,52,94,
91,92,50,100,222,112,67,117,107,101,53,21,74,92,103,98,86,30,14,28,14,102,
172,125,69,66,122,175,108,124,111,139,52,48,153,165,178,162,0,0,2,0,133,255,
14,10,206,3,131,0,96,0,107,0,0,1,22,22,23,30,3,51,50,54,53,53,51,30,3,21,
20,6,35,34,39,21,16,2,35,34,2,17,6,35,34,39,21,20,14,2,35,34,2,17,52,62,2,
51,50,30,2,21,20,6,35,35,18,51,50,62,2,53,17,51,30,3,21,20,22,51,50,55,54,
54,55,51,14,3,21,20,22,51,50,54,53,52,46,2,39,1,51,50,54,53,52,38,35,34,6,
21,8,219,15,25,8,10,31,36,38,17,72,65,141,9,15,11,6,159,160,68,46,235,238,
239,234,51,64,80,53,62,130,201,138,236,239,46,79,104,58,66,107,75,41,140,
141,94,65,209,94,132,84,38,142,8,15,11,7,73,60,97,28,6,26,23,180,19,25,14,
5,145,146,145,146,6,14,25,19,249,20,93,66,52,53,51,51,56,3,109,52,140,72,
24,37,24,12,87,91,185,26,60,59,53,19,142,153,29,19,254,194,254,211,1,47,1,
62,12,43,31,165,236,150,70,1,88,1,73,102,172,125,69,66,122,175,108,124,111,
254,225,54,116,182,129,1,236,18,52,55,53,19,75,91,83,61,139,78,79,124,112,
111,66,246,233,233,246,67,111,111,123,80,253,223,52,48,153,165,178,162,0,
2,0,115,1,133,2,98,3,117,0,12,0,24,0,0,1,20,6,35,34,38,53,52,54,51,50,23,
22,7,52,38,35,34,6,21,20,22,51,50,54,2,98,149,99,102,145,147,100,105,70,73,
75,103,70,69,103,99,73,78,95,2,125,107,141,144,104,102,146,74,72,102,70,102,
102,70,72,100,104,0,0,1,1,33,2,86,2,69,3,134,0,11,0,0,1,6,6,35,34,38,53,52,
54,51,50,22,2,69,6,87,64,67,68,89,70,60,73,2,238,72,80,69,63,80,92,77,0,0,
0,0,0,15,0,186,0,3,0,1,4,9,0,0,0,94,0,0,0,3,0,1,4,9,0,1,0,34,0,94,0,3,0,1,
4,9,0,2,0,14,0,128,0,3,0,1,4,9,0,3,0,72,0,142,0,3,0,1,4,9,0,4,0,34,0,94,0,
3,0,1,4,9,0,5,0,30,0,214,0,3,0,1,4,9,0,6,0,30,0,244,0,3,0,1,4,9,0,7,0,68,
1,18,0,3,0,1,4,9,0,8,0,42,1,86,0,3,0,1,4,9,0,9,0,40,1,128,0,3,0,1,4,9,0,10,
0,96,1,168,0,3,0,1,4,9,0,11,0,62,2,8,0,3,0,1,4,9,0,12,0,60,2,70,0,3,0,1,4,
9,0,13,2,150,2,130,0,3,0,1,4,9,0,14,0,52,5,24,0,67,0,111,0,112,0,121,0,114,
0,105,0,103,0,104,0,116,0,32,0,50,0,48,0,49,0,51,0,32,0,71,0,111,0,111,0,
103,0,108,0,101,0,32,0,73,0,110,0,99,0,46,0,32,0,65,0,108,0,108,0,32,0,82,
0,105,0,103,0,104,0,116,0,115,0,32,0,82,0,101,0,115,0,101,0,114,0,118,0,101,
0,100,0,46,0,78,0,111,0,116,0,111,0,32,0,83,0,97,0,110,0,115,0,32,0,65,0,
118,0,101,0,115,0,116,0,97,0,110,0,82,0,101,0,103,0,117,0,108,0,97,0,114,
0,77,0,111,0,110,0,111,0,116,0,121,0,112,0,101,0,32,0,73,0,109,0,97,0,103,
0,105,0,110,0,103,0,32,0,45,0,32,0,78,0,111,0,116,0,111,0,32,0,83,0,97,0,
110,0,115,0,32,0,65,0,118,0,101,0,115,0,116,0,97,0,110,0,86,0,101,0,114,0,
115,0,105,0,111,0,110,0,32,0,49,0,46,0,48,0,52,0,32,0,117,0,104,0,78,0,111,
0,116,0,111,0,83,0,97,0,110,0,115,0,65,0,118,0,101,0,115,0,116,0,97,0,110,
0,78,0,111,0,116,0,111,0,32,0,105,0,115,0,32,0,97,0,32,0,116,0,114,0,97,0,
100,0,101,0,109,0,97,0,114,0,107,0,32,0,111,0,102,0,32,0,71,0,111,0,111,0,
103,0,108,0,101,0,32,0,73,0,110,0,99,0,46,0,77,0,111,0,110,0,111,0,116,0,
121,0,112,0,101,0,32,0,73,0,109,0,97,0,103,0,105,0,110,0,103,0,32,0,73,0,
110,0,99,0,46,0,77,0,111,0,110,0,111,0,116,0,121,0,112,0,101,0,32,0,68,0,
101,0,115,0,105,0,103,0,110,0,32,0,84,0,101,0,97,0,109,0,68,0,97,0,116,0,
97,0,32,0,117,0,110,0,104,0,105,0,110,0,116,0,101,0,100,0,46,0,32,0,68,0,
101,0,115,0,105,0,103,0,110,0,101,0,100,0,32,0,98,0,121,0,32,0,77,0,111,0,
110,0,111,0,116,0,121,0,112,0,101,0,32,0,100,0,101,0,115,0,105,0,103,0,110,
0,32,0,116,0,101,0,97,0,109,0,46,0,104,0,116,0,116,0,112,0,58,0,47,0,47,0,
119,0,119,0,119,0,46,0,103,0,111,0,111,0,103,0,108,0,101,0,46,0,99,0,111,
0,109,0,47,0,103,0,101,0,116,0,47,0,110,0,111,0,116,0,111,0,47,0,104,0,116,
0,116,0,112,0,58,0,47,0,47,0,119,0,119,0,119,0,46,0,109,0,111,0,110,0,111,
0,116,0,121,0,112,0,101,0,46,0,99,0,111,0,109,0,47,0,115,0,116,0,117,0,100,
0,105,0,111,0,84,0,104,0,105,0,115,0,32,0,70,0,111,0,110,0,116,0,32,0,83,
0,111,0,102,0,116,0,119,0,97,0,114,0,101,0,32,0,105,0,115,0,32,0,108,0,105,
0,99,0,101,0,110,0,115,0,101,0,100,0,32,0,117,0,110,0,100,0,101,0,114,0,32,
0,116,0,104,0,101,0,32,0,83,0,73,0,76,0,32,0,79,0,112,0,101,0,110,0,32,0,
70,0,111,0,110,0,116,0,32,0,76,0,105,0,99,0,101,0,110,0,115,0,101,0,44,0,
32,0,86,0,101,0,114,0,115,0,105,0,111,0,110,0,32,0,49,0,46,0,49,0,46,0,32,
0,84,0,104,0,105,0,115,0,32,0,70,0,111,0,110,0,116,0,32,0,83,0,111,0,102,
0,116,0,119,0,97,0,114,0,101,0,32,0,105,0,115,0,32,0,100,0,105,0,115,0,116,
0,114,0,105,0,98,0,117,0,116,0,101,0,100,0,32,0,111,0,110,0,32,0,97,0,110,
0,32,0,34,0,65,0,83,0,32,0,73,0,83,0,34,0,32,0,66,0,65,0,83,0,73,0,83,0,44,
0,32,0,87,0,73,0,84,0,72,0,79,0,85,0,84,0,32,0,87,0,65,0,82,0,82,0,65,0,78,
0,84,0,73,0,69,0,83,0,32,0,79,0,82,0,32,0,67,0,79,0,78,0,68,0,73,0,84,0,73,
0,79,0,78,0,83,0,32,0,79,0,70,0,32,0,65,0,78,0,89,0,32,0,75,0,73,0,78,0,68,
0,44,0,32,0,101,0,105,0,116,0,104,0,101,0,114,0,32,0,101,0,120,0,112,0,114,
0,101,0,115,0,115,0,32,0,111,0,114,0,32,0,105,0,109,0,112,0,108,0,105,0,101,
0,100,0,46,0,32,0,83,0,101,0,101,0,32,0,116,0,104,0,101,0,32,0,83,0,73,0,
76,0,32,0,79,0,112,0,101,0,110,0,32,0,70,0,111,0,110,0,116,0,32,0,76,0,105,
0,99,0,101,0,110,0,115,0,101,0,32,0,102,0,111,0,114,0,32,0,116,0,104,0,101,
0,32,0,115,0,112,0,101,0,99,0,105,0,102,0,105,0,99,0,32,0,108,0,97,0,110,
0,103,0,117,0,97,0,103,0,101,0,44,0,32,0,112,0,101,0,114,0,109,0,105,0,115,
0,115,0,105,0,111,0,110,0,115,0,32,0,97,0,110,0,100,0,32,0,108,0,105,0,109,
0,105,0,116,0,97,0,116,0,105,0,111,0,110,0,115,0,32,0,103,0,111,0,118,0,101,
0,114,0,110,0,105,0,110,0,103,0,32,0,121,0,111,0,117,0,114,0,32,0,117,0,115,
0,101,0,32,0,111,0,102,0,32,0,116,0,104,0,105,0,115,0,32,0,70,0,111,0,110,
0,116,0,32,0,83,0,111,0,102,0,116,0,119,0,97,0,114,0,101,0,46,0,104,0,116,
0,116,0,112,0,58,0,47,0,47,0,115,0,99,0,114,0,105,0,112,0,116,0,115,0,46,
0,115,0,105,0,108,0,46,0,111,0,114,0,103,0,47,0,79,0,70,0,76,0,0,0,2,0,0,
0,0,0,0,255,102,0,102,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,73,0,0,1,
2,0,2,0,3,1,3,1,4,1,5,1,6,1,7,1,8,1,9,1,10,1,11,1,12,1,13,1,14,1,15,1,16,
1,17,1,18,1,19,1,20,1,21,1,22,1,23,1,24,1,25,1,26,1,27,1,28,1,29,1,30,1,31,
1,32,1,33,1,34,1,35,1,36,1,37,1,38,1,39,1,40,1,41,1,42,1,43,1,44,1,45,1,46,
1,47,1,48,1,49,1,50,1,51,1,52,1,53,1,54,1,55,1,56,1,57,1,58,1,59,1,60,1,61,
1,62,1,63,1,64,1,65,1,66,1,67,1,68,1,69,1,70,1,71,4,110,117,108,108,7,117,
110,105,50,48,48,67,7,117,110,105,50,48,48,68,8,117,110,105,49,48,66,48,48,
8,117,110,105,49,48,66,48,49,8,117,110,105,49,48,66,48,50,8,117,110,105,49,
48,66,48,51,8,117,110,105,49,48,66,48,52,8,117,110,105,49,48,66,48,53,8,117,
110,105,49,48,66,48,54,8,117,110,105,49,48,66,48,55,8,117,110,105,49,48,66,
48,56,8,117,110,105,49,48,66,48,57,8,117,110,105,49,48,66,48,65,8,117,110,
105,49,48,66,48,66,8,117,110,105,49,48,66,48,67,8,117,110,105,49,48,66,48,
68,8,117,110,105,49,48,66,48,69,8,117,110,105,49,48,66,48,70,8,117,110,105,
49,48,66,49,48,8,117,110,105,49,48,66,49,49,8,117,110,105,49,48,66,49,50,
8,117,110,105,49,48,66,49,51,8,117,110,105,49,48,66,49,52,8,117,110,105,49,
48,66,49,53,8,117,110,105,49,48,66,49,54,8,117,110,105,49,48,66,49,55,8,117,
110,105,49,48,66,49,56,8,117,110,105,49,48,66,49,57,8,117,110,105,49,48,66,
49,65,8,117,110,105,49,48,66,49,66,8,117,110,105,49,48,66,49,67,8,117,110,
105,49,48,66,49,68,8,117,110,105,49,48,66,49,69,8,117,110,105,49,48,66,49,
70,8,117,110,105,49,48,66,50,48,8,117,110,105,49,48,66,50,49,8,117,110,105,
49,48,66,50,50,8,117,110,105,49,48,66,50,51,8,117,110,105,49,48,66,50,52,
8,117,110,105,49,48,66,50,53,8,117,110,105,49,48,66,50,54,8,117,110,105,49,
48,66,50,55,8,117,110,105,49,48,66,50,56,8,117,110,105,49,48,66,50,57,8,117,
110,105,49,48,66,50,65,8,117,110,105,49,48,66,50,66,8,117,110,105,49,48,66,
50,67,8,117,110,105,49,48,66,50,68,8,117,110,105,49,48,66,50,69,8,117,110,
105,49,48,66,50,70,8,117,110,105,49,48,66,51,48,8,117,110,105,49,48,66,51,
49,8,117,110,105,49,48,66,51,50,8,117,110,105,49,48,66,51,51,8,117,110,105,
49,48,66,51,52,8,117,110,105,49,48,66,51,53,8,117,110,105,49,48,66,51,57,
8,117,110,105,49,48,66,51,65,8,117,110,105,49,48,66,51,66,8,117,110,105,49,
48,66,51,67,8,117,110,105,49,48,66,51,68,8,117,110,105,49,48,66,51,69,8,117,
110,105,49,48,66,51,70,13,117,110,105,49,48,66,51,49,49,48,66,48,48,13,117,
110,105,49,48,66,51,49,49,48,66,49,55,13,117,110,105,49,48,66,51,49,49,48,
66,49,57,13,117,110,105,49,48,66,48,48,49,48,66,51,53,7,117,110,105,50,69,
51,48,7,117,110,105,50,69,51,49,0,0,0,0,0,2,0,8,0,2,255,255,0,3,0,1,0,0,0,
12,0,0,0,34,0,0,0,2,0,3,0,0,0,66,0,1,0,67,0,70,0,2,0,71,0,72,0,1,0,12,0,4,
0,22,0,30,0,38,0,46,0,2,0,1,0,67,0,70,0,0,0,1,0,4,0,1,7,63,0,1,0,4,0,1,7,
101,0,1,0,4,0,1,6,209,0,1,0,4,0,1,4,239,0,1,0,0,0,10,0,44,0,46,0,2,68,70,
76,84,0,24,97,118,115,116,0,14,0,4,0,0,0,0,255,255,0,0,0,4,0,0,0,0,255,255,
0,0,0,0,0,0,0,1,0,0,0,10,0,48,0,74,0,2,68,70,76,84,0,26,97,118,115,116,0,
14,0,4,0,0,0,0,255,255,0,1,0,0,0,4,0,0,0,0,255,255,0,1,0,1,0,2,108,105,103,
97,0,14,108,105,103,97,0,20,0,0,0,1,0,0,0,0,0,1,0,0,0,1,0,4,0,4,0,1,0,1,0,
8,0,1,0,46,0,2,0,10,0,20,0,1,0,4,0,70,0,2,0,59,0,3,0,8,0,14,0,20,0,67,0,2,
0,6,0,68,0,2,0,29,0,69,0,2,0,31,0,1,0,2,0,6,0,55,0};
#endif
