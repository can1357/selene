#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_FILE_SEGMENT_ELEMENT.Buffer", buffer, 0x0, 0x40, true, 0x97a31f201b93c910)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_FILE_SEGMENT_ELEMENT.Alignment", alignment, 0x0, 0x40, true, 0x99de1ea155abc127)
#else
#define _m00
#define _m01
#endif