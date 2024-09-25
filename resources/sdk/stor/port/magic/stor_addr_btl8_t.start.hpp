#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_STOR_ADDR_BTL8.Type", type, 0x0, 0x10, true, 0xa19d44c64f65339)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_STOR_ADDR_BTL8.Port", port, 0x10, 0x10, true, 0x7465db7fef30e178)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_STOR_ADDR_BTL8.AddressLength", address_length, 0x20, 0x20, true, 0x3367595fbf02bca0)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_STOR_ADDR_BTL8.Path", path, 0x40, 0x8, true, 0xd44645de340feec5)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_STOR_ADDR_BTL8.Target", target, 0x48, 0x8, true, 0x77242c4ec5c4f337)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_STOR_ADDR_BTL8.Lun", lun, 0x50, 0x8, true, 0xf4df08b1c136c894)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#endif