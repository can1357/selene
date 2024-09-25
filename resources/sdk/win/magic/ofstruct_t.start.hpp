#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_OFSTRUCT.cBytes", c_bytes, 0x0, 0x8, true, 0xf0c83a5a341dfa2b)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_OFSTRUCT.fFixedDisk", f_fixed_disk, 0x8, 0x8, true, 0xc956d16b5807de97)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_OFSTRUCT.nErrCode", n_err_code, 0x10, 0x10, true, 0x2051aeb29990059d)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<char, 128>), "_OFSTRUCT.szPathName", sz_path_name, 0x40, 0x0, true, 0x29b628dbd61cc120)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif