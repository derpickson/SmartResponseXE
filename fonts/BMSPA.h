//Large & Normal font - are 3 sets of 3 pixels - BMSPA_font (8 bit font, not 9 bit but appears to work)
const unsigned char bmspa[] PROGMEM = {
	0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, //  
	0x00,0x5f,0x00,0x00,0x00,0x00,0x00,0x00, // !
	0x00,0x03,0x00,0x03,0x00,0x00,0x00,0x00, // "
	0x0a,0x1f,0x0a,0x1f,0x0a,0x00,0x00,0x00, // #
	0x24,0x2a,0x2a,0x7f,0x2a,0x2a,0x12,0x00, // $
	0x00,0x47,0x25,0x17,0x08,0x74,0x52,0x71, // %
	0x00,0x36,0x49,0x49,0x49,0x41,0x41,0x38, // &
	0x00,0x03,0x00,0x00,0x00,0x00,0x00,0x00, // '
	0x00,0x3e,0x41,0x00,0x00,0x00,0x00,0x00, // (
	0x41,0x3e,0x00,0x00,0x00,0x00,0x00,0x00, // )
	0x04,0x15,0x0e,0x15,0x04,0x00,0x00,0x00, // *
	0x08,0x08,0x3e,0x08,0x08,0x00,0x00,0x00, // +
	0x00,0xc0,0x00,0x00,0x00,0x00,0x00,0x00, // ,
	0x08,0x08,0x08,0x08,0x08,0x00,0x00,0x00, // -
	0x40,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // .
	0x40,0x20,0x10,0x08,0x04,0x02,0x01,0x00, // /
	0x00,0x3e,0x61,0x51,0x49,0x45,0x43,0x3e, // 0
	0x01,0x01,0x7e,0x00,0x00,0x00,0x00,0x00, // 1
	0x00,0x71,0x49,0x49,0x49,0x49,0x49,0x46, // 2
	0x41,0x49,0x49,0x49,0x49,0x49,0x36,0x00, // 3
	0x00,0x0f,0x10,0x10,0x10,0x10,0x10,0x7f, // 4
	0x00,0x4f,0x49,0x49,0x49,0x49,0x49,0x31, // 5
	0x00,0x3e,0x49,0x49,0x49,0x49,0x49,0x30, // 6
	0x01,0x01,0x01,0x01,0x01,0x01,0x7e,0x00, // 7
	0x00,0x36,0x49,0x49,0x49,0x49,0x49,0x36, // 8
	0x00,0x06,0x49,0x49,0x49,0x49,0x49,0x3e, // 9
	0x14,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // :
	0x40,0x34,0x00,0x00,0x00,0x00,0x00,0x00, // ;
	0x08,0x14,0x22,0x00,0x00,0x00,0x00,0x00, // <
	0x14,0x14,0x14,0x14,0x14,0x00,0x00,0x00, // =
	0x22,0x14,0x08,0x00,0x00,0x00,0x00,0x00, // >
	0x00,0x06,0x01,0x01,0x59,0x09,0x09,0x06, // ?
	0x00,0x3e,0x41,0x5d,0x55,0x5d,0x51,0x5e, // @
	0x00,0x7e,0x01,0x09,0x09,0x09,0x09,0x7e, // A
	0x00,0x7f,0x41,0x49,0x49,0x49,0x49,0x36, // B
	0x00,0x3e,0x41,0x41,0x41,0x41,0x41,0x22, // C
	0x00,0x7f,0x41,0x41,0x41,0x41,0x41,0x3e, // D
	0x00,0x3e,0x49,0x49,0x49,0x49,0x49,0x41, // E
	0x00,0x7e,0x09,0x09,0x09,0x09,0x09,0x01, // F
	0x00,0x3e,0x41,0x49,0x49,0x49,0x49,0x79, // G
	0x00,0x7f,0x08,0x08,0x08,0x08,0x08,0x7f, // H
	0x00,0x7f,0x00,0x00,0x00,0x00,0x00,0x00, // I
	0x00,0x38,0x40,0x40,0x41,0x41,0x41,0x3f, // J
	0x00,0x7f,0x08,0x08,0x08,0x0c,0x0a,0x71, // K
	0x00,0x3f,0x40,0x40,0x40,0x40,0x40,0x40, // L
	0x00,0x7e,0x01,0x01,0x7e,0x01,0x01,0x7e, // M
	0x00,0x7e,0x01,0x01,0x3e,0x40,0x40,0x3f, // N
	0x00,0x3e,0x41,0x41,0x41,0x41,0x41,0x3e, // O
	0x00,0x7e,0x09,0x09,0x09,0x09,0x09,0x06, // P
	0x00,0x3e,0x41,0x41,0x71,0x51,0x51,0x7e, // Q
	0x00,0x7e,0x01,0x31,0x49,0x49,0x49,0x46, // R
	0x00,0x46,0x49,0x49,0x49,0x49,0x49,0x31, // S
	0x01,0x01,0x01,0x7f,0x01,0x01,0x01,0x00, // T
	0x00,0x3f,0x40,0x40,0x40,0x40,0x40,0x3f, // U
	0x00,0x0f,0x10,0x20,0x40,0x20,0x10,0x0f, // V
	0x00,0x3f,0x40,0x40,0x3f,0x40,0x40,0x3f, // W
	0x00,0x63,0x14,0x08,0x08,0x08,0x14,0x63, // X
	0x00,0x07,0x08,0x08,0x78,0x08,0x08,0x07, // Y
	0x00,0x71,0x49,0x49,0x49,0x49,0x49,0x47, // Z
	0x00,0x7f,0x41,0x00,0x00,0x00,0x00,0x00, // [
	0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // "\"
	0x41,0x7f,0x00,0x00,0x00,0x00,0x00,0x00, // ]
	0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // ^
	0x40,0x40,0x40,0x40,0x40,0x40,0x40,0x00, // _
	0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // `
	0x00,0x7e,0x01,0x09,0x09,0x09,0x09,0x7e, // A
	0x00,0x7f,0x41,0x49,0x49,0x49,0x49,0x36, // B
	0x00,0x3e,0x41,0x41,0x41,0x41,0x41,0x22, // C
	0x00,0x7f,0x41,0x41,0x41,0x41,0x41,0x3e, // D
	0x00,0x3e,0x49,0x49,0x49,0x49,0x49,0x41, // E
	0x00,0x7e,0x09,0x09,0x09,0x09,0x09,0x01, // F
	0x00,0x3e,0x41,0x49,0x49,0x49,0x49,0x79, // G
	0x00,0x7f,0x08,0x08,0x08,0x08,0x08,0x7f, // H
	0x00,0x7f,0x00,0x00,0x00,0x00,0x00,0x00, // I
	0x00,0x38,0x40,0x40,0x41,0x41,0x41,0x3f, // J
	0x00,0x7f,0x08,0x08,0x08,0x0c,0x0a,0x71, // K
	0x00,0x3f,0x40,0x40,0x40,0x40,0x40,0x40, // L
	0x00,0x7e,0x01,0x01,0x7e,0x01,0x01,0x7e, // M
	0x00,0x7e,0x01,0x01,0x3e,0x40,0x40,0x3f, // N
	0x00,0x3e,0x41,0x41,0x41,0x41,0x41,0x3e, // O
	0x00,0x7e,0x09,0x09,0x09,0x09,0x09,0x06, // P
	0x00,0x3e,0x41,0x41,0x71,0x51,0x51,0x7e, // Q
	0x00,0x7e,0x01,0x31,0x49,0x49,0x49,0x46, // R
	0x00,0x46,0x49,0x49,0x49,0x49,0x49,0x31, // S
	0x01,0x01,0x01,0x7f,0x01,0x01,0x01,0x00, // T
	0x00,0x3f,0x40,0x40,0x40,0x40,0x40,0x3f, // U
	0x00,0x0f,0x10,0x20,0x40,0x20,0x10,0x0f, // V
	0x00,0x3f,0x40,0x40,0x3f,0x40,0x40,0x3f, // W
	0x00,0x63,0x14,0x08,0x08,0x08,0x14,0x63, // X
	0x00,0x07,0x08,0x08,0x78,0x08,0x08,0x07, // Y
	0x00,0x71,0x49,0x49,0x49,0x49,0x49,0x47, // Z
	0x08,0x36,0x41,0x00,0x00,0x00,0x00,0x00, // {
	0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // |
	0x41,0x36,0x08,0x00,0x00,0x00,0x00,0x00, // }
	0x02,0x01,0x01,0x02,0x02,0x01,0x00,0x00, // ~
	0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00
};
