#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_FILE_PATH.Version", version, 0x0, 0x20, true, 0x833f2c21194c093c)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_FILE_PATH.Length", length, 0x20, 0x20, true, 0xdbc9e799477fc6fc)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_FILE_PATH.Type", type, 0x40, 0x20, true, 0x3864df754923d7eb)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 1>), "_FILE_PATH.FilePath", file_path, 0x60, 0x8, true, 0x49f4fb38cb8fe87)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif