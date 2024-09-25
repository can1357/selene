#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::variant<sdk::array<struct win::package_id_and_install_order_t, 4>, sdk::array<struct win::package_id_and_install_orders_t, 4>>), "PackageListBuffer._fixedBuffer", fixed_buffer, 0x0, 0x0, true, 0x84d52d2123ef7eb5)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::variant<struct win::package_id_and_install_order_t*, struct win::package_id_and_install_orders_t*>), "PackageListBuffer._buffer", buffer, 0x200, 0x40, true, 0xd3bd8535c28167ab)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "PackageListBuffer._endIndex", end_index, 0x240, 0x20, true, 0xade4a9f6e3aa2233)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "PackageListBuffer._dynamicBufferLength", dynamic_buffer_length, 0x2c0, 0x20, true, 0x1b19be98677cd81d)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif