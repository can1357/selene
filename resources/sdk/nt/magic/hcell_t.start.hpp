#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_HCELL.Size", size, 0x0, 0x20, true, 0x565f555882f0188b)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_HCELL.NewCell.UserData", user_data, 0x0, 0x20, true, 0x8cadc2254c50f4d6)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_HCELL.NewCell.Next", next, 0x0, 0x20, true, 0x1c4438f15d6e4e48)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u0_new_cell_t), "_HCELL.NewCell", new_cell, 0x20, 0x20, true, 0xa115ccacf41261b3)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif