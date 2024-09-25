#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_FIRMWARE_REQUEST_BLOCK.Version", version, 0x0, 0x20, true, 0x5ab96a23232f4c08)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_FIRMWARE_REQUEST_BLOCK.Size", size, 0x20, 0x20, true, 0x56f2c103d5ee960c)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_FIRMWARE_REQUEST_BLOCK.Function", function, 0x40, 0x20, true, 0xaa88d17172baf6a9)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_FIRMWARE_REQUEST_BLOCK.Flags", flags, 0x60, 0x20, true, 0x70c329f07462cb43)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_FIRMWARE_REQUEST_BLOCK.DataBufferOffset", data_buffer_offset, 0x80, 0x20, true, 0x2f47e52e29027f96)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_FIRMWARE_REQUEST_BLOCK.DataBufferLength", data_buffer_length, 0xa0, 0x20, true, 0x6f38333f175bf92b)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#endif