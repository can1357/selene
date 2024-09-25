#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(d3dddi_updategpuvirtualaddress_operation_type_t ), "_D3DDDI_UPDATEGPUVIRTUALADDRESS_OPERATION.OperationType", operation_type, 0x0, 0x20, true, 0xf4c8a3abc96324bb)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_D3DDDI_UPDATEGPUVIRTUALADDRESS_OPERATION.Map.BaseAddress", base_address, 0x0, 0x40, true, 0x3538aa8c3704718b)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_D3DDDI_UPDATEGPUVIRTUALADDRESS_OPERATION.Map.SizeInBytes", size_in_bytes, 0x40, 0x40, true, 0x83f5d59a1e0a5e2f)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_D3DDDI_UPDATEGPUVIRTUALADDRESS_OPERATION.Map.hAllocation", h_allocation, 0x80, 0x20, true, 0x59e868970010df78)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_D3DDDI_UPDATEGPUVIRTUALADDRESS_OPERATION.Map.AllocationOffsetInBytes", allocation_offset_in_bytes, 0xc0, 0x40, true, 0xf26fca752f4355d)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_D3DDDI_UPDATEGPUVIRTUALADDRESS_OPERATION.Map.AllocationSizeInBytes", allocation_size_in_bytes, 0x100, 0x40, true, 0xa32e7c0e80d8b0df)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(u0_map_t), "_D3DDDI_UPDATEGPUVIRTUALADDRESS_OPERATION.Map", map, 0x40, 0x40, true, 0x249789dcbe32af04)
#define _m07 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_D3DDDI_UPDATEGPUVIRTUALADDRESS_OPERATION.MapProtect.BaseAddress", base_address, 0x0, 0x40, true, 0xa1195810b41c71e6)
#define _m08 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_D3DDDI_UPDATEGPUVIRTUALADDRESS_OPERATION.MapProtect.SizeInBytes", size_in_bytes, 0x40, 0x40, true, 0xceeb64e38a3e7a38)
#define _m09 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_D3DDDI_UPDATEGPUVIRTUALADDRESS_OPERATION.MapProtect.hAllocation", h_allocation, 0x80, 0x20, true, 0x2ae1b745d25b285d)
#define _m10 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_D3DDDI_UPDATEGPUVIRTUALADDRESS_OPERATION.MapProtect.AllocationOffsetInBytes", allocation_offset_in_bytes, 0xc0, 0x40, true, 0xa7a2bd5f41e6e8d4)
#define _m11 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_D3DDDI_UPDATEGPUVIRTUALADDRESS_OPERATION.MapProtect.AllocationSizeInBytes", allocation_size_in_bytes, 0x100, 0x40, true, 0xf4d44adc5f6706da)
#define _m12 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct nt::d3dddigpuvirtualaddress_protection_type_t), "_D3DDDI_UPDATEGPUVIRTUALADDRESS_OPERATION.MapProtect.Protection", protection, 0x140, 0x40, true, 0x47b57ee75b77c5ca)
#define _m13 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_D3DDDI_UPDATEGPUVIRTUALADDRESS_OPERATION.MapProtect.DriverProtection", driver_protection, 0x180, 0x40, true, 0x49e8fe52ff91c59a)
#define _m14 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(u1_map_protect_t), "_D3DDDI_UPDATEGPUVIRTUALADDRESS_OPERATION.MapProtect", map_protect, 0x40, 0xc0, true, 0x91efbb26c82678f4)
#define _m15 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_D3DDDI_UPDATEGPUVIRTUALADDRESS_OPERATION.Unmap.BaseAddress", base_address, 0x0, 0x40, true, 0x4f86cd6da0040921)
#define _m16 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_D3DDDI_UPDATEGPUVIRTUALADDRESS_OPERATION.Unmap.SizeInBytes", size_in_bytes, 0x40, 0x40, true, 0x471641309bbaac87)
#define _m17 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct nt::d3dddigpuvirtualaddress_protection_type_t), "_D3DDDI_UPDATEGPUVIRTUALADDRESS_OPERATION.Unmap.Protection", protection, 0x80, 0x40, true, 0x52154645ff753fb5)
#define _m18 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(u2_unmap_t), "_D3DDDI_UPDATEGPUVIRTUALADDRESS_OPERATION.Unmap", unmap, 0x40, 0xc0, true, 0x16441312536c43f2)
#define _m19 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_D3DDDI_UPDATEGPUVIRTUALADDRESS_OPERATION.Copy.SourceAddress", source_address, 0x0, 0x40, true, 0x9c3e968193101526)
#define _m20 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_D3DDDI_UPDATEGPUVIRTUALADDRESS_OPERATION.Copy.SizeInBytes", size_in_bytes, 0x40, 0x40, true, 0xb5b02f3e11327cfa)
#define _m21 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_D3DDDI_UPDATEGPUVIRTUALADDRESS_OPERATION.Copy.DestAddress", dest_address, 0x80, 0x40, true, 0x216525fbbb399d7)
#define _m22 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(u3_copy_t), "_D3DDDI_UPDATEGPUVIRTUALADDRESS_OPERATION.Copy", copy, 0x40, 0xc0, true, 0xa27701c53027c7b2)
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
#define _m10
#define _m11
#define _m12
#define _m13
#define _m14
#define _m15
#define _m16
#define _m17
#define _m18
#define _m19
#define _m20
#define _m21
#define _m22
#endif