#ifndef doom_sprites_h
#define doom_sprites_h

#define bmp_font_width   24  // in bytes
#define bmp_font_height  6   
#define CHAR_MAP         " 0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ.,-_(){}[]#"
#define CHAR_WIDTH       4
#define CHAR_HEIGHT      6
const static uint8_t bmp_font[] PROGMEM = {
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x80, 0x00, 
  0x06, 0x26, 0x69, 0xf6, 0xf6, 0x66, 0xe6, 0xef, 0xf6, 0x92, 0x19, 0x89, 0x96, 0xe6, 0xe6, 0xe9, 0x99, 0x99, 0xf0, 0x00, 0x02, 0x41, 0x83, 0xcf, 
  0x09, 0x29, 0x99, 0x88, 0x19, 0x99, 0x99, 0x98, 0x88, 0x92, 0x1a, 0x8f, 0xd9, 0x99, 0x98, 0x49, 0x99, 0x99, 0x10, 0x00, 0x04, 0x27, 0xe5, 0x6f, 
  0x09, 0x22, 0x2f, 0xee, 0x16, 0x7f, 0xe8, 0x9e, 0xe8, 0xf2, 0x1c, 0x89, 0xb9, 0xe9, 0xe6, 0x49, 0x99, 0x66, 0x60, 0x06, 0x04, 0x27, 0xe7, 0xef, 
  0x09, 0x24, 0x91, 0x19, 0x19, 0x19, 0x99, 0x98, 0x89, 0x92, 0x9a, 0x89, 0x99, 0x8b, 0x91, 0x49, 0x6f, 0x96, 0x80, 0x20, 0x04, 0x21, 0x87, 0xef, 
  0x06, 0x7f, 0x61, 0xe6, 0x16, 0x69, 0xe6, 0xef, 0x86, 0x92, 0x69, 0xf9, 0x96, 0x87, 0x9e, 0x46, 0x69, 0x96, 0xf4, 0x40, 0xf2, 0x41, 0x80, 0xe0, 
};

#define BMP_LOGO_WIDTH  87
#define BMP_LOGO_HEIGHT 56
const static uint8_t bmp_logo_bits[] PROGMEM = {
  0x40, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x20, 0x80, 0x00, 0x08, 0x00, 0x08, 0x80, 0x08, 0x02, 
  0x00, 0x00, 0x11, 0x00, 0x00, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x20, 0x00, 0x0a, 0x00, 0x00, 0x90, 0x00, 0x02, 0x80, 0x00, 0x02, 
  0x00, 0x00, 0x10, 0x00, 0x00, 0x10, 0x00, 0x04, 0x00, 0x40, 0x04, 
  0x20, 0x00, 0x1a, 0x00, 0x00, 0x90, 0x00, 0x04, 0x80, 0x28, 0x06, 
  0x20, 0x00, 0x13, 0x01, 0x00, 0xd0, 0x00, 0x04, 0x80, 0x08, 0x06, 
  0x22, 0xbe, 0x1b, 0x07, 0xe2, 0x92, 0x7a, 0x06, 0x80, 0x38, 0x06, 
  0x60, 0x84, 0x13, 0x04, 0x20, 0x50, 0x42, 0x04, 0x80, 0x10, 0x06, 
  0x28, 0x8c, 0x1a, 0x0c, 0x28, 0xd8, 0xe2, 0x8e, 0x80, 0x38, 0x06, 
  0x60, 0x84, 0x13, 0x04, 0x20, 0xd0, 0x42, 0x04, 0x80, 0x10, 0x06, 
  0x22, 0xa6, 0x3b, 0x26, 0x22, 0xf2, 0x62, 0x26, 0xa2, 0x22, 0x26, 
  0x60, 0x84, 0x13, 0x04, 0x20, 0xd0, 0x46, 0x04, 0xc0, 0x00, 0x06, 
  0x2a, 0xae, 0xbb, 0xae, 0xaa, 0xda, 0xea, 0xae, 0xaa, 0xaa, 0xae, 
  0x71, 0xc5, 0x1b, 0x15, 0x31, 0xd1, 0x57, 0x14, 0xd0, 0x00, 0x06, 
  0x2a, 0xae, 0xbb, 0x2f, 0xaa, 0xfa, 0xea, 0xae, 0xea, 0xaa, 0xae, 
  0x64, 0xcd, 0x57, 0x57, 0x64, 0xd4, 0x76, 0x44, 0xc6, 0x00, 0x06, 
  0x6a, 0xee, 0xbb, 0xaf, 0xea, 0xfa, 0xee, 0xae, 0xea, 0xaa, 0xae, 
  0x75, 0xdd, 0x5b, 0x57, 0x75, 0xd5, 0x7f, 0x5d, 0xd7, 0x51, 0x56, 
  0x6b, 0xfe, 0xbb, 0xaf, 0xea, 0xfb, 0xfe, 0xae, 0xfb, 0x2a, 0xae, 
  0x75, 0xfd, 0x5f, 0x57, 0x75, 0xd5, 0x7e, 0x5c, 0xd7, 0x15, 0x56, 
  0x6b, 0xfe, 0xfb, 0xef, 0xee, 0xff, 0xfe, 0xfe, 0xff, 0xbb, 0xae, 
  0x75, 0xfd, 0x5f, 0x57, 0xf5, 0xd5, 0x7f, 0x5d, 0xd7, 0x45, 0xd6, 
  0x7e, 0xff, 0xfb, 0xff, 0xee, 0xfb, 0xff, 0xfe, 0xff, 0xab, 0xbe, 
  0x7c, 0xf5, 0xff, 0x77, 0xe4, 0xd6, 0x7f, 0x7c, 0xd7, 0xc5, 0xd6, 
  0x7a, 0xef, 0xfb, 0xff, 0xea, 0xfe, 0xff, 0xfe, 0xfe, 0xab, 0xfe, 
  0x75, 0xed, 0xff, 0xf6, 0x35, 0xd1, 0x47, 0xfd, 0xfe, 0xd3, 0xb6, 
  0x6b, 0xfb, 0xff, 0xff, 0x3a, 0xf2, 0xef, 0xfe, 0xfe, 0xfb, 0xbe, 
  0x65, 0xf7, 0xff, 0xfd, 0xb4, 0xd5, 0x5f, 0xfd, 0xfe, 0xd7, 0x86, 
  0x6f, 0xff, 0xff, 0xff, 0xee, 0xfb, 0xff, 0xfe, 0xfe, 0xff, 0xa6, 
  0x75, 0xff, 0xff, 0xff, 0x74, 0xd5, 0xff, 0xfd, 0xff, 0x75, 0x96, 
  0x6f, 0xff, 0xff, 0xff, 0xfb, 0xfb, 0xff, 0xff, 0xfe, 0xff, 0xae, 
  0x77, 0xff, 0xf3, 0xff, 0xf7, 0xdf, 0xff, 0xfc, 0xfe, 0x7d, 0xd6, 
  0x6f, 0xff, 0xfb, 0xff, 0xff, 0xff, 0xff, 0xf9, 0xfe, 0xfd, 0xae, 
  0x7f, 0xff, 0xfc, 0xff, 0xff, 0xff, 0xff, 0xf3, 0xff, 0x7d, 0xd6, 
  0x7f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfb, 0xfe, 
  0x7f, 0xff, 0xff, 0x3f, 0xff, 0x9f, 0xff, 0xcf, 0xff, 0x7d, 0xf6, 
  0x7f, 0xff, 0xfe, 0x1f, 0xff, 0x0f, 0xff, 0xcf, 0xfe, 0xbb, 0xfe, 
  0x7f, 0xff, 0xfc, 0x07, 0xfc, 0x07, 0xff, 0x03, 0xff, 0xfd, 0xf6, 
  0x7f, 0xff, 0xf8, 0x03, 0xf8, 0x03, 0xfe, 0x01, 0xff, 0xfb, 0xfe, 
  0x7f, 0xff, 0xf0, 0x01, 0xf0, 0x00, 0xf8, 0x00, 0x7f, 0x75, 0xfe, 
  0x7f, 0xff, 0xe0, 0x00, 0xe0, 0x00, 0x70, 0x00, 0x3d, 0xff, 0xfe, 
  0x7f, 0xff, 0x80, 0x00, 0x40, 0x00, 0x00, 0x00, 0x11, 0xdd, 0xfe, 
  0x7f, 0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x8f, 0xfe, 
  0x7f, 0xf4, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1d, 0xfe, 
  0x7f, 0xf8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0f, 0xfe, 
  0x7f, 0xf0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1f, 0xfe, 
  0x7f, 0xe0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0f, 0xfe, 
  0x7f, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1f, 0xfe, 
  0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0f, 0xfe, 
  0xfc, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 0xfe, 
  0x78, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0xfe, 
  0x30, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0xfe, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xfe, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3c, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x18, 
};

#define BMP_GUN_WIDTH   32
#define BMP_GUN_HEIGHT  33
const static uint8_t bmp_gun_bits[] PROGMEM = {
  0x00, 0x00, 0x20, 0x00, 
  0x00, 0x00, 0xd8, 0x00, 
  0x00, 0x01, 0xc4, 0x00, 
  0x00, 0x02, 0x04, 0x00, 
  0x00, 0x02, 0x02, 0x00, 
  0x00, 0x02, 0xea, 0x00, 
  0x00, 0x04, 0xd1, 0x00, 
  0x00, 0x09, 0x88, 0x80, 
  0x00, 0x19, 0x00, 0x00, 
  0x00, 0x0d, 0xc2, 0x80, 
  0x00, 0x29, 0x81, 0xc0, 
  0x00, 0x0b, 0xa2, 0x20, 
  0x00, 0x31, 0x40, 0x40, 
  0x00, 0x23, 0x00, 0xc0, 
  0x00, 0x13, 0x00, 0x40, 
  0x00, 0x72, 0x02, 0x00, 
  0x00, 0x49, 0x00, 0x40, 
  0x01, 0xe0, 0xa8, 0x20, 
  0x07, 0xf1, 0x00, 0x30, 
  0x0b, 0xb9, 0xe0, 0xe8, 
  0x07, 0x5c, 0x03, 0xfc, 
  0x07, 0xef, 0xff, 0xee, 
  0x07, 0x75, 0x7f, 0xd2, 
  0x1b, 0xbb, 0xff, 0xb2, 
  0x11, 0x57, 0x7d, 0x64, 
  0x32, 0xaf, 0xff, 0xe8, 
  0x13, 0x5f, 0x75, 0xd0, 
  0x33, 0xff, 0xfb, 0x98, 
  0x17, 0xd7, 0xe5, 0x00, 
  0x1b, 0x8f, 0xb2, 0x30, 
  0x03, 0x7d, 0x58, 0x10, 
  0x6f, 0xbf, 0xec, 0x20, 
  0xc0, 0x75, 0xd0, 0x40, 
};
const static uint8_t bmp_gun_mask[] PROGMEM = {
  0x00, 0x00, 0x70, 0x00, 
  0x00, 0x01, 0xfc, 0x00, 
  0x00, 0x03, 0xfe, 0x00, 
  0x00, 0x07, 0xfe, 0x00, 
  0x00, 0x07, 0xff, 0x00, 
  0x00, 0x07, 0xff, 0x00, 
  0x00, 0x0f, 0xff, 0x80, 
  0x00, 0x1f, 0xff, 0xc0, 
  0x00, 0x3f, 0xff, 0x80, 
  0x00, 0x3f, 0xff, 0xc0, 
  0x00, 0x7f, 0xff, 0xe0, 
  0x00, 0x7f, 0xff, 0xf0, 
  0x00, 0x7f, 0xff, 0xe0, 
  0x00, 0x7f, 0xff, 0xe0, 
  0x00, 0x7f, 0xff, 0xe0, 
  0x00, 0xff, 0xff, 0xc0, 
  0x00, 0xff, 0xff, 0xe0, 
  0x03, 0xff, 0xff, 0xf0, 
  0x0f, 0xff, 0xff, 0xf8, 
  0x1f, 0xff, 0xff, 0xfc, 
  0x1f, 0xff, 0xff, 0xfe, 
  0x1f, 0xff, 0xff, 0xff, 
  0x1f, 0xff, 0xff, 0xff, 
  0x3f, 0xff, 0xff, 0xff, 
  0x3f, 0xff, 0xff, 0xfe, 
  0x7f, 0xff, 0xff, 0xfc, 
  0x7f, 0xff, 0xff, 0xf8, 
  0x7f, 0xff, 0xff, 0xfc, 
  0x7f, 0xff, 0xff, 0xf8, 
  0x7f, 0xff, 0xff, 0xf8, 
  0x7f, 0xff, 0xff, 0xf8, 
  0xff, 0xff, 0xff, 0xf0, 
  0xff, 0xff, 0xff, 0xe0, 
};

#define BMP_FIRE_WIDTH  24
#define BMP_FIRE_HEIGHT 20
const static uint8_t bmp_fire_bits[] PROGMEM = {
  0x00, 0x00, 0x00, 
  0x00, 0x18, 0x00, 
  0x00, 0x0c, 0x00, 
  0x02, 0x77, 0x00, 
  0x01, 0x67, 0x00, 
  0x01, 0xe5, 0x80, 
  0x01, 0xe3, 0xc0, 
  0x02, 0xa2, 0xc0, 
  0x07, 0x82, 0xe0, 
  0x1f, 0x41, 0xf9, 
  0x9d, 0x80, 0x7c, 
  0x3e, 0x00, 0x5e, 
  0x76, 0x00, 0x6a, 
  0x38, 0x00, 0x36, 
  0x2f, 0x80, 0x5c, 
  0x36, 0x00, 0x7e, 
  0x3f, 0x00, 0x58, 
  0x10, 0x00, 0x3c, 
  0x88, 0x00, 0x00, 
  0x00, 0x00, 0x00, 
};

#define BMP_IMP_WIDTH   32
#define BMP_IMP_HEIGHT  32
#define BMP_IMP_COUNT   5
const static uint8_t bmp_imp_bits[] PROGMEM = {
0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 
  0x00, 0x01, 0x80, 0x00, 
  0x00, 0x02, 0x80, 0x00, 
  0x00, 0x07, 0x40, 0x00, 
  0x00, 0x02, 0x80, 0x00, 
  0x00, 0x01, 0x00, 0x00, 
  0x01, 0x0f, 0xb3, 0x00, 
  0x00, 0xd0, 0x4e, 0x00, 
  0x00, 0x79, 0x8c, 0x00, 
  0x00, 0x1c, 0x19, 0x00, 
  0x01, 0x8a, 0x20, 0x00, 
  0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x03, 0x00, 
  0x02, 0x00, 0x00, 0x00, 
  0x03, 0x02, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x40, 
  0x02, 0x08, 0x00, 0x80, 
  0x00, 0x00, 0x01, 0x00, 
  0x01, 0x8e, 0x30, 0x00, 
  0x00, 0x04, 0x10, 0x00, 
  0x00, 0x0c, 0x20, 0x00, 
  0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x10, 0x00, 
  0x00, 0x06, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x20, 0x00, 
  0x00, 0x01, 0x00, 0x00, 
  0x00, 0x02, 0x20, 0x00, 
  0x00, 0x05, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 
  0x00, 0x01, 0x80, 0x00, 
  0x00, 0x02, 0x40, 0x00, 
  0x00, 0x03, 0xe0, 0x00, 
  0x00, 0x04, 0x00, 0x00, 
  0x00, 0x01, 0xa1, 0x80, 
  0x01, 0x80, 0x13, 0x00, 
  0x00, 0xf3, 0x8a, 0x00, 
  0x00, 0x09, 0x94, 0x00, 
  0x00, 0x88, 0x38, 0x80, 
  0x00, 0x00, 0x00, 0x00, 
  0x00, 0x02, 0x23, 0x00, 
  0x00, 0x00, 0x00, 0x40, 
  0x01, 0x80, 0x00, 0x80, 
  0x00, 0x00, 0x01, 0x00, 
  0x00, 0xe2, 0x80, 0x00, 
  0x00, 0x00, 0x00, 0x00, 
  0x00, 0x0c, 0x20, 0x00, 
  0x00, 0x04, 0x30, 0x00, 
  0x00, 0x02, 0x20, 0x00, 
  0x00, 0x00, 0x40, 0x00, 
  0x00, 0x00, 0x00, 0x00, 
  0x00, 0x01, 0x00, 0x00, 
  0x00, 0x02, 0x20, 0x00, 
  0x00, 0x06, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 
  0x00, 0x02, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0xa0, 0x00, 
  0x00, 0x00, 0x48, 0x00, 
  0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x04, 0x00, 
  0x00, 0x00, 0x0a, 0x00, 
  0x00, 0x00, 0x1f, 0x00, 
  0x00, 0x02, 0x2a, 0x80, 
  0x00, 0x01, 0x05, 0x00, 
  0x00, 0x01, 0xae, 0x20, 
  0x00, 0x01, 0x24, 0x40, 
  0x00, 0x02, 0xac, 0x80, 
  0x00, 0x02, 0x86, 0x00, 
  0x00, 0x03, 0x20, 0x20, 
  0x00, 0x04, 0x30, 0x40, 
  0x00, 0x0c, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x40, 
  0x00, 0x00, 0x20, 0x20, 
  0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x08, 0x20, 
  0x00, 0x01, 0x00, 0x00, 
  0x00, 0x02, 0x1a, 0x00, 
  0x00, 0x00, 0x1c, 0x00, 
  0x00, 0x00, 0x38, 0x00, 
  0x00, 0x04, 0x00, 0x00, 
  0x00, 0x02, 0x98, 0x00, 
  0x00, 0x00, 0x18, 0x00, 
  0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x36, 0x00, 
  0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x20, 0x00, 
  0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x04, 0x00, 
  0x00, 0x00, 0x0a, 0x00, 
  0x00, 0x00, 0x08, 0x40, 
  0x00, 0x00, 0x00, 0x80, 
  0x00, 0x01, 0xd6, 0x80, 
  0x00, 0x02, 0xbf, 0x80, 
  0x00, 0x06, 0x61, 0xa0, 
  0x00, 0x0c, 0xe8, 0x80, 
  0x00, 0x0c, 0x10, 0x00, 
  0x00, 0x1a, 0x22, 0x00, 
  0x00, 0x12, 0x40, 0x00, 
  0x00, 0x06, 0x0c, 0x00, 
  0x00, 0x04, 0x0d, 0x00, 
  0x00, 0x3a, 0x03, 0x00, 
  0x00, 0x10, 0x02, 0x00, 
  0x00, 0x60, 0x0a, 0x00, 
  0x00, 0x50, 0x04, 0x00, 
  0x00, 0x20, 0x03, 0x00, 
  0x00, 0x00, 0x04, 0x00, 
  0x00, 0x20, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 
  0x00, 0x20, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 
  0x00, 0x40, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 
  0x00, 0x02, 0x24, 0x00, 
  0x00, 0x01, 0x08, 0x00, 
  0x00, 0x01, 0x18, 0x00, 
  0x00, 0x01, 0x41, 0x40, 
  0x02, 0x33, 0xb6, 0x80, 
  0x01, 0x9c, 0x04, 0x00, 
  0x08, 0xfa, 0x02, 0x08, 
  0x05, 0x00, 0x01, 0x0c, 
  0x27, 0x83, 0xa2, 0x2a, 
  0x00, 0x04, 0x00, 0x00, 
  0x02, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 
};
const static uint8_t bmp_imp_mask[] PROGMEM = {
  0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 
  0x00, 0x03, 0xc0, 0x00, 
  0x00, 0x03, 0xc0, 0x00, 
  0x00, 0x07, 0xe0, 0x00, 
  0x00, 0x07, 0xe0, 0x00, 
  0x00, 0x03, 0xe0, 0x00, 
  0x01, 0x07, 0xf1, 0x80, 
  0x00, 0xdf, 0xfe, 0x00, 
  0x00, 0x3f, 0xfe, 0x00, 
  0x00, 0x7f, 0xff, 0x00, 
  0x01, 0xff, 0xff, 0x80, 
  0x00, 0xff, 0xff, 0x80, 
  0x01, 0xff, 0xff, 0x80, 
  0x03, 0xcf, 0xf1, 0xc0, 
  0x01, 0xc7, 0xf1, 0xc0, 
  0x01, 0x87, 0xf1, 0xc0, 
  0x03, 0x0f, 0xf9, 0x80, 
  0x03, 0x0f, 0xfb, 0x80, 
  0x01, 0x8f, 0xff, 0x80, 
  0x03, 0x9f, 0x79, 0x00, 
  0x00, 0x1f, 0x7c, 0x00, 
  0x00, 0x0f, 0x78, 0x00, 
  0x00, 0x0f, 0x78, 0x00, 
  0x00, 0x07, 0x30, 0x00, 
  0x00, 0x07, 0x38, 0x00, 
  0x00, 0x07, 0x30, 0x00, 
  0x00, 0x07, 0x30, 0x00, 
  0x00, 0x03, 0x78, 0x00, 
  0x00, 0x07, 0x30, 0x00, 
  0x00, 0x0f, 0x80, 0x00, 
  0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 
  0x00, 0x03, 0xc0, 0x00, 
  0x00, 0x07, 0xc0, 0x00, 
  0x00, 0x07, 0xe0, 0x00, 
  0x00, 0x07, 0xc0, 0x00, 
  0x01, 0x07, 0xe1, 0x00, 
  0x00, 0x8f, 0xfa, 0x00, 
  0x00, 0xff, 0xfe, 0x00, 
  0x00, 0x3f, 0xfe, 0x00, 
  0x01, 0x7f, 0xff, 0x80, 
  0x00, 0xff, 0xff, 0x00, 
  0x01, 0xff, 0xff, 0x80, 
  0x03, 0xcf, 0xfb, 0xc0, 
  0x03, 0x87, 0xf1, 0xc0, 
  0x03, 0xcf, 0xf3, 0xc0, 
  0x01, 0xcf, 0xf1, 0x80, 
  0x00, 0xcf, 0xf1, 0x00, 
  0x00, 0x0f, 0xfb, 0x80, 
  0x00, 0x1e, 0x78, 0x00, 
  0x00, 0x0e, 0x78, 0x00, 
  0x00, 0x1e, 0x78, 0x00, 
  0x00, 0x0f, 0x70, 0x00, 
  0x00, 0x0f, 0x78, 0x00, 
  0x00, 0x07, 0x70, 0x00, 
  0x00, 0x07, 0x70, 0x00, 
  0x00, 0x07, 0x38, 0x00, 
  0x00, 0x03, 0x30, 0x00, 
  0x00, 0x03, 0x20, 0x00, 
  0x00, 0x07, 0x30, 0x00, 
  0x00, 0x05, 0x70, 0x00, 
  0x00, 0x00, 0x78, 0x00, 
  0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x0e, 0x00, 
  0x00, 0x00, 0x1f, 0x00, 
  0x00, 0x00, 0x1f, 0x00, 
  0x00, 0x03, 0x3f, 0x80, 
  0x00, 0x01, 0x3f, 0x00, 
  0x00, 0x01, 0xff, 0x30, 
  0x00, 0x03, 0xff, 0xc0, 
  0x00, 0x03, 0xff, 0xc0, 
  0x00, 0x03, 0xff, 0x80, 
  0x00, 0x07, 0xff, 0xe0, 
  0x00, 0x07, 0xff, 0xc0, 
  0x00, 0x05, 0xff, 0xe0, 
  0x00, 0x00, 0xfc, 0xe0, 
  0x00, 0x01, 0xfc, 0xe0, 
  0x00, 0x01, 0xfc, 0x70, 
  0x00, 0x03, 0xfc, 0x38, 
  0x00, 0x03, 0xfe, 0x70, 
  0x00, 0x07, 0xfc, 0x00, 
  0x00, 0x07, 0x9e, 0x00, 
  0x00, 0x0f, 0xbc, 0x00, 
  0x00, 0x0f, 0x3e, 0x00, 
  0x00, 0x07, 0x9c, 0x00, 
  0x00, 0x03, 0x9c, 0x00, 
  0x00, 0x03, 0xb8, 0x00, 
  0x00, 0x03, 0x98, 0x00, 
  0x00, 0x01, 0x98, 0x00, 
  0x00, 0x02, 0x1c, 0x00, 
  0x00, 0x00, 0x36, 0x00, 
  0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x20, 0x00, 
  0x00, 0x00, 0x38, 0x00, 
  0x00, 0x00, 0x1f, 0x00, 
  0x00, 0x00, 0x1f, 0x40, 
  0x00, 0x00, 0x3e, 0x80, 
  0x00, 0x01, 0xff, 0x80, 
  0x00, 0x03, 0xff, 0x80, 
  0x00, 0x07, 0xff, 0xe0, 
  0x00, 0x0e, 0xff, 0xc0, 
  0x00, 0x0c, 0xff, 0x80, 
  0x00, 0x1f, 0xfe, 0x00, 
  0x00, 0x13, 0xfc, 0x00, 
  0x00, 0x07, 0xfe, 0x00, 
  0x00, 0x1f, 0xff, 0x00, 
  0x00, 0x3f, 0x9f, 0x00, 
  0x00, 0x3e, 0x0f, 0x00, 
  0x00, 0x7c, 0x0f, 0x00, 
  0x00, 0x78, 0x0f, 0x00, 
  0x00, 0x78, 0x07, 0x80, 
  0x00, 0x78, 0x07, 0x40, 
  0x00, 0x38, 0x07, 0x80, 
  0x00, 0x30, 0x07, 0x00, 
  0x00, 0x30, 0x01, 0x00, 
  0x01, 0xf0, 0x00, 0x00, 
  0x01, 0xb0, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 
  0x00, 0x01, 0x1c, 0x00, 
  0x00, 0x01, 0x3e, 0x00, 
  0x00, 0x03, 0xff, 0x00, 
  0x00, 0x0f, 0xff, 0xe0, 
  0x01, 0x3f, 0xff, 0xc0, 
  0x01, 0xff, 0xff, 0xc0, 
  0x19, 0xff, 0xff, 0xe8, 
  0x7f, 0xff, 0xff, 0xfe, 
  0x3f, 0xff, 0xff, 0xfe, 
  0x1f, 0xc2, 0x07, 0xe0, 
  0x1f, 0x00, 0x01, 0xe0, 
  0x0e, 0x00, 0x00, 0x40, 
  0x00, 0x00, 0x00, 0x00, 
};


#define BMP_ITEMS_WIDTH   16
#define BMP_ITEMS_HEIGHT  16
#define BMP_ITEMS_COUNT   2
const static uint8_t bmp_items_bits[] PROGMEM = {
  0x1f, 0xf8, 
  0x3f, 0xfc, 
  0x7f, 0xfe, 
  0x7f, 0xfe, 
  0x77, 0xee, 
  0x3f, 0xfc, 
  0x5f, 0xfa, 
  0x2f, 0xf6, 
  0x53, 0xcc, 
  0x3e, 0x7e, 
  0x5e, 0x7c, 
  0x38, 0x1e, 
  0x58, 0x1c, 
  0x3e, 0x7e, 
  0x5e, 0x7e, 
  0x2e, 0xfc, 
  0x00, 0x00, 
  0x00, 0x00, 
  0x00, 0x00, 
  0x00, 0x00, 
  0x00, 0x00, 
  0x0f, 0xfc, 
  0x17, 0xfc, 
  0x22, 0x6c, 
  0x36, 0x44, 
  0x3f, 0xfc, 
  0x1f, 0xfc, 
  0x2b, 0xfc, 
  0x05, 0x54, 
  0x02, 0xa8, 
  0x00, 0x00, 
  0x00, 0x00, 
};
const static uint8_t bmp_items_mask[] PROGMEM = {
  0x1f, 0xf8, 
  0x3f, 0xfc, 
  0x7f, 0xfe, 
  0x7f, 0xfe, 
  0x7f, 0xfe, 
  0x7f, 0xfe, 
  0x7f, 0xfe, 
  0x7f, 0xfe, 
  0x7f, 0xfe, 
  0x7f, 0xfe, 
  0x7f, 0xfe, 
  0x7f, 0xfe, 
  0x7f, 0xfe, 
  0x7f, 0xfe, 
  0x7f, 0xfe, 
  0x3f, 0xfc, 
  0x00, 0x00, 
  0x00, 0x00, 
  0x00, 0x00, 
  0x00, 0x00, 
  0x00, 0x00, 
  0x0f, 0xfc, 
  0x1f, 0xfc, 
  0x3f, 0xfc, 
  0x3f, 0xfc, 
  0x3f, 0xfc, 
  0x3f, 0xfc, 
  0x3f, 0xfc, 
  0x07, 0xfc, 
  0x03, 0xf8, 
  0x00, 0x00, 
  0x00, 0x00, 
};

// Gradient for lighting. 
// Note: Width and height are in bytes
#define gradient_width 2
#define gradient_height 8
#define gradient_count 8
const static uint8_t gradient[] PROGMEM = {
  0x00, 0x00, 
  0x00, 0x00, 
  0x00, 0x00, 
  0x00, 0x00, 
  0x00, 0x00, 
  0x00, 0x00, 
  0x00, 0x00, 
  0x00, 0x00, 
  0x00, 0x00, 
  0x88, 0x88, 
  0x00, 0x00, 
  0x22, 0x22, 
  0x00, 0x00, 
  0x8a, 0x8a, 
  0x00, 0x00, 
  0x22, 0x22, 
  0x00, 0x00, 
  0xaa, 0xaa, 
  0x10, 0x10, 
  0xaa, 0xaa, 
  0x00, 0x00, 
  0xaa, 0xaa, 
  0x01, 0x01, 
  0xaa, 0xaa, 
  0x44, 0x44, 
  0xaa, 0xaa, 
  0x55, 0x55, 
  0xaa, 0xaa, 
  0x44, 0x44, 
  0xaa, 0xaa, 
  0x15, 0x55, 
  0xaa, 0xaa, 
  0x55, 0x55, 
  0xaa, 0xaa, 
  0x55, 0x55, 
  0xbb, 0xbb, 
  0x55, 0x55, 
  0xaa, 0xea, 
  0x55, 0x55, 
  0xbb, 0xbb, 
  0x55, 0x55, 
  0xff, 0xff, 
  0x55, 0x55, 
  0xfb, 0xfb, 
  0x55, 0x55, 
  0xff, 0xff, 
  0x55, 0x55, 
  0xbb, 0xbf, 
  0x57, 0x57, 
  0xff, 0xff, 
  0xdd, 0xdd, 
  0xff, 0xff, 
  0x77, 0x75, 
  0xff, 0xff, 
  0xdd, 0xdd, 
  0xff, 0xff, 
  0xff, 0xff, 
  0xff, 0xff, 
  0xff, 0xff, 
  0xff, 0xff, 
  0xff, 0xff, 
  0xff, 0xff, 
  0xff, 0xff, 
  0xff, 0xff, 
};

#endif
