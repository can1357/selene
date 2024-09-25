#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int64_t), "_DISK_COPY_DATA_PARAMETERS.SourceOffset", source_offset, 0x0, 0x40, true, 0xdd41ff70fe087fc8)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int64_t), "_DISK_COPY_DATA_PARAMETERS.DestinationOffset", destination_offset, 0x40, 0x40, true, 0x1903e5bd02982eb2)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int64_t), "_DISK_COPY_DATA_PARAMETERS.CopyLength", copy_length, 0x80, 0x40, true, 0xa21c1738e3d36b94)
#else
#define _m00
#define _m01
#define _m02
#endif