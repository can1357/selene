#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "D3DDDI_RESERVEGPUVIRTUALADDRESS.hPagingQueue", h_paging_queue, 0x0, 0x20, true, 0x77771ee72f270e67)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "D3DDDI_RESERVEGPUVIRTUALADDRESS.hAdapter", h_adapter, 0x0, 0x20, true, 0xd26d12f115cc1ce2)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "D3DDDI_RESERVEGPUVIRTUALADDRESS.BaseAddress", base_address, 0x40, 0x40, true, 0x387e0e6d9400bf8f)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "D3DDDI_RESERVEGPUVIRTUALADDRESS.MinimumAddress", minimum_address, 0x80, 0x40, true, 0x46d389d576e61342)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "D3DDDI_RESERVEGPUVIRTUALADDRESS.MaximumAddress", maximum_address, 0xc0, 0x40, true, 0x7474395a298b30f6)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "D3DDDI_RESERVEGPUVIRTUALADDRESS.Size", size, 0x100, 0x40, true, 0x66f7539c18845dbc)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(d3dddigpuvirtualaddress_reservation_type_t ), "D3DDDI_RESERVEGPUVIRTUALADDRESS.ReservationType", reservation_type, 0x140, 0x20, true, 0x63b252be8cd9fad3)
#define _m07 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "D3DDDI_RESERVEGPUVIRTUALADDRESS.DriverProtection", driver_protection, 0x180, 0x40, true, 0xbf7832e41f58ce98)
#define _m08 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "D3DDDI_RESERVEGPUVIRTUALADDRESS.VirtualAddress", virtual_address, 0x1c0, 0x40, true, 0xd67742e74b5fab6f)
#define _m09 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "D3DDDI_RESERVEGPUVIRTUALADDRESS.PagingFenceValue", paging_fence_value, 0x200, 0x40, true, 0x99c3939cd3713e1b)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#define _m07
#define _m08
#define _m09
#endif