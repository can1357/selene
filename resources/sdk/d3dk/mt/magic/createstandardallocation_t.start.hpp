#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(enum d3dk::mt::standardallocationtype_t), "_D3DKMT_CREATESTANDARDALLOCATION.Type", type, 0x0, 0x20, true, 0x49d97275e62b5f2f)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct d3dk::mt::standardallocation_existingheap_t), "_D3DKMT_CREATESTANDARDALLOCATION.ExistingHeapData", existing_heap_data, 0x40, 0x40, true, 0x71c20aad87a12e9b)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct d3dk::mt::createstandardallocationflags_t), "_D3DKMT_CREATESTANDARDALLOCATION.Flags", flags, 0x80, 0x20, true, 0x723ab86162cc8a6a)
#else
#define _m00
#define _m01
#define _m02
#endif