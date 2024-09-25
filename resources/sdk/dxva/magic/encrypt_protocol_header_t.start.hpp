#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXVA_EncryptProtocolHeader.dwFunction", dw_function, 0x0, 0x20, true, 0xdce930f1d0e93a50)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct nt::guid_t), "_DXVA_EncryptProtocolHeader.guidEncryptProtocol", guid_encrypt_protocol, 0x80, 0x80, true, 0x705d1df54d8ef6f3)
#else
#define _m00
#define _m01
#endif