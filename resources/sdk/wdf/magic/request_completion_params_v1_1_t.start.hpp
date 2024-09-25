#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_REQUEST_COMPLETION_PARAMS_V1_1.Size", size, 0x0, 0x0, false, 0xfcdb69c14d1d6725)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum wdf::request_type_t), "_WDF_REQUEST_COMPLETION_PARAMS_V1_1.Type", type, 0x0, 0x0, false, 0x1400d23184474e42)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct io::status_block_t), "_WDF_REQUEST_COMPLETION_PARAMS_V1_1.IoStatus", io_status, 0x0, 0x0, false, 0xe4f2e2f8d5be1710)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct wdf::wdfmemory_t*), "_WDF_REQUEST_COMPLETION_PARAMS_V1_1.Parameters.Write.Buffer", buffer, 0x0, 0x0, false, 0x253349206f29ac24)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_WDF_REQUEST_COMPLETION_PARAMS_V1_1.Parameters.Write.Length", length, 0x0, 0x0, false, 0xcf6de1cc87a1dcdf)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_WDF_REQUEST_COMPLETION_PARAMS_V1_1.Parameters.Write.Offset", offset, 0x0, 0x0, false, 0x2bac07927f0f9c6d)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u1_write_t), "_WDF_REQUEST_COMPLETION_PARAMS_V1_1.Parameters.Write", write, 0x0, 0x0, false, 0xa0d2903d75ce2adb)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct wdf::wdfmemory_t*), "_WDF_REQUEST_COMPLETION_PARAMS_V1_1.Parameters.Read.Buffer", buffer, 0x0, 0x0, false, 0x9657a4c87a7d40ca)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_WDF_REQUEST_COMPLETION_PARAMS_V1_1.Parameters.Read.Length", length, 0x0, 0x0, false, 0x5273de6ac587259f)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_WDF_REQUEST_COMPLETION_PARAMS_V1_1.Parameters.Read.Offset", offset, 0x0, 0x0, false, 0x4ecb003fd3c84f06)
#define _m10 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u2_read_t), "_WDF_REQUEST_COMPLETION_PARAMS_V1_1.Parameters.Read", read, 0x0, 0x0, false, 0x7a2402f76622f5bd)
#define _m11 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_REQUEST_COMPLETION_PARAMS_V1_1.Parameters.Ioctl.IoControlCode", io_control_code, 0x0, 0x0, false, 0x931dbd2b2304f3e3)
#define _m12 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct wdf::wdfmemory_t*), "_WDF_REQUEST_COMPLETION_PARAMS_V1_1.Parameters.Ioctl.Input.Buffer", buffer, 0x0, 0x0, false, 0x972ee6d233deb417)
#define _m13 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_WDF_REQUEST_COMPLETION_PARAMS_V1_1.Parameters.Ioctl.Input.Offset", offset, 0x0, 0x0, false, 0x5fc6f330c4a7d496)
#define _m14 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u4_input_t), "_WDF_REQUEST_COMPLETION_PARAMS_V1_1.Parameters.Ioctl.Input", input, 0x0, 0x0, false, 0x6ff776711a5170f2)
#define _m15 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct wdf::wdfmemory_t*), "_WDF_REQUEST_COMPLETION_PARAMS_V1_1.Parameters.Ioctl.Output.Buffer", buffer, 0x0, 0x0, false, 0x8e02ed01d3fa7951)
#define _m16 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_WDF_REQUEST_COMPLETION_PARAMS_V1_1.Parameters.Ioctl.Output.Offset", offset, 0x0, 0x0, false, 0x4c95ef23378207bc)
#define _m17 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_WDF_REQUEST_COMPLETION_PARAMS_V1_1.Parameters.Ioctl.Output.Length", length, 0x0, 0x0, false, 0x8651a68a44acbf7d)
#define _m18 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u5_output_t), "_WDF_REQUEST_COMPLETION_PARAMS_V1_1.Parameters.Ioctl.Output", output, 0x0, 0x0, false, 0xeee5bf447f54706)
#define _m19 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u3_ioctl_t), "_WDF_REQUEST_COMPLETION_PARAMS_V1_1.Parameters.Ioctl", ioctl, 0x0, 0x0, false, 0x102589e8bd13a9a0)
#define _m20 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_WDF_REQUEST_COMPLETION_PARAMS_V1_1.Parameters.Others.Argument1.Ptr", ptr, 0x0, 0x0, false, 0x87ff9b87e7c84405)
#define _m21 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_WDF_REQUEST_COMPLETION_PARAMS_V1_1.Parameters.Others.Argument1.Value", value, 0x0, 0x0, false, 0xa4f67ec95c0b3e70)
#define _m22 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u7_argument1_t), "_WDF_REQUEST_COMPLETION_PARAMS_V1_1.Parameters.Others.Argument1", argument1, 0x0, 0x0, false, 0x76c96ea78b6fe4c0)
#define _m23 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_WDF_REQUEST_COMPLETION_PARAMS_V1_1.Parameters.Others.Argument2.Ptr", ptr, 0x0, 0x0, false, 0xb05d094a74f6441e)
#define _m24 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_WDF_REQUEST_COMPLETION_PARAMS_V1_1.Parameters.Others.Argument2.Value", value, 0x0, 0x0, false, 0x5fb97df1763200a5)
#define _m25 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u8_argument2_t), "_WDF_REQUEST_COMPLETION_PARAMS_V1_1.Parameters.Others.Argument2", argument2, 0x0, 0x0, false, 0xc9107121b715cbdc)
#define _m26 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_WDF_REQUEST_COMPLETION_PARAMS_V1_1.Parameters.Others.Argument3.Ptr", ptr, 0x0, 0x0, false, 0x1dde3fdd1937c01d)
#define _m27 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_WDF_REQUEST_COMPLETION_PARAMS_V1_1.Parameters.Others.Argument3.Value", value, 0x0, 0x0, false, 0x13156530a6ec5ef4)
#define _m28 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u9_argument3_t), "_WDF_REQUEST_COMPLETION_PARAMS_V1_1.Parameters.Others.Argument3", argument3, 0x0, 0x0, false, 0xf4c6ff75a981d991)
#define _m29 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_WDF_REQUEST_COMPLETION_PARAMS_V1_1.Parameters.Others.Argument4.Ptr", ptr, 0x0, 0x0, false, 0xc2e5434f0940ced6)
#define _m30 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_WDF_REQUEST_COMPLETION_PARAMS_V1_1.Parameters.Others.Argument4.Value", value, 0x0, 0x0, false, 0x3b0fe140c5dd18bf)
#define _m31 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u10_argument4_t), "_WDF_REQUEST_COMPLETION_PARAMS_V1_1.Parameters.Others.Argument4", argument4, 0x0, 0x0, false, 0xbdb03a0fc5b31d3a)
#define _m32 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u6_others_t), "_WDF_REQUEST_COMPLETION_PARAMS_V1_1.Parameters.Others", others, 0x0, 0x0, false, 0x997f3d4fa45c08c5)
#define _m33 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(pwdf_usb_request_completion_params_v1_1_t ), "_WDF_REQUEST_COMPLETION_PARAMS_V1_1.Parameters.Usb.Completion", completion, 0x0, 0x0, false, 0xdb465e26f413518e)
#define _m34 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u11_usb_t), "_WDF_REQUEST_COMPLETION_PARAMS_V1_1.Parameters.Usb", usb, 0x0, 0x0, false, 0xb4f88d7757c8923b)
#define _m35 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u0_parameters_t), "_WDF_REQUEST_COMPLETION_PARAMS_V1_1.Parameters", parameters, 0x0, 0x0, false, 0xb578f22c8b1498af)
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
#define _m23
#define _m24
#define _m25
#define _m26
#define _m27
#define _m28
#define _m29
#define _m30
#define _m31
#define _m32
#define _m33
#define _m34
#define _m35
#endif