#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "CsFrame.SavedR10", saved_r10, 0x0, 0x40, true, 0xc78bbc9fdfb11da9)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "CsFrame.SavedR11", saved_r11, 0x40, 0x40, true, 0xd2bb7978fc595c2e)
#else
#define _m00
#define _m01
#endif