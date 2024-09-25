#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int64_t), "_PLEX_READ_DATA_REQUEST.ByteOffset", byte_offset, 0x0, 0x40, true, 0x53c807f72d8011a5)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_PLEX_READ_DATA_REQUEST.ByteLength", byte_length, 0x40, 0x20, true, 0x74da787ca41da7b)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_PLEX_READ_DATA_REQUEST.PlexNumber", plex_number, 0x60, 0x20, true, 0xcec43bf297ee454a)
#else
#define _m00
#define _m01
#define _m02
#endif