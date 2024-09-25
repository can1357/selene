#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int64_t), "_TAPE_GET_MEDIA_PARAMETERS.Capacity", capacity, 0x0, 0x40, true, 0xa08beb2647fdee7e)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int64_t), "_TAPE_GET_MEDIA_PARAMETERS.Remaining", remaining, 0x40, 0x40, true, 0xe28fc557d9921e0a)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_TAPE_GET_MEDIA_PARAMETERS.BlockSize", block_size, 0x80, 0x20, true, 0x2d66532c300c4783)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_TAPE_GET_MEDIA_PARAMETERS.PartitionCount", partition_count, 0xa0, 0x20, true, 0xbb3961f8127e63da)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_TAPE_GET_MEDIA_PARAMETERS.WriteProtected", write_protected, 0xc0, 0x8, true, 0x72f744bf1df6702a)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif