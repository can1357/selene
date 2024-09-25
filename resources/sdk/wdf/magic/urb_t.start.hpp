#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct wdf::urb_header_t), "_URB.UrbHeader", urb_header, 0x0, 0xc0, true, 0x1aabef2f4b06674)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct wdf::urb_select_interface_t), "_URB.UrbSelectInterface", urb_select_interface, 0x0, 0x80, true, 0x4a4485a1315ab16c)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct wdf::urb_select_configuration_t), "_URB.UrbSelectConfiguration", urb_select_configuration, 0x0, 0xc0, true, 0x3a250edd8e7eb976)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct wdf::urb_pipe_request_t), "_URB.UrbPipeRequest", urb_pipe_request, 0x0, 0x40, true, 0xb5204f25b953a98e)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct wdf::urb_frame_length_control_t), "_URB.UrbFrameLengthControl", urb_frame_length_control, 0x0, 0xc0, true, 0x69c03298f67252da)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct wdf::urb_get_frame_length_t), "_URB.UrbGetFrameLength", urb_get_frame_length, 0x0, 0x0, true, 0xcf2ba44b622ffec4)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct wdf::urb_set_frame_length_t), "_URB.UrbSetFrameLength", urb_set_frame_length, 0x0, 0x0, true, 0xf28d730fb0655a4f)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct wdf::urb_get_current_frame_number_t), "_URB.UrbGetCurrentFrameNumber", urb_get_current_frame_number, 0x0, 0x0, true, 0xaef9b732a2a7c436)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct wdf::urb_control_transfer_t), "_URB.UrbControlTransfer", urb_control_transfer, 0x0, 0x40, true, 0x45dd23efbeddd341)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct wdf::urb_control_transfer_ex_t), "_URB.UrbControlTransferEx", urb_control_transfer_ex, 0x0, 0x40, true, 0xf92dfd13ab8a509)
#define _m10 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct wdf::urb_bulk_or_interrupt_transfer_t), "_URB.UrbBulkOrInterruptTransfer", urb_bulk_or_interrupt_transfer, 0x0, 0x0, true, 0x2ebf9e421192e044)
#define _m11 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct wdf::urb_isoch_transfer_t), "_URB.UrbIsochronousTransfer", urb_isochronous_transfer, 0x0, 0xc0, true, 0xcf98d1845aba36b5)
#define _m12 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct wdf::urb_control_descriptor_request_t), "_URB.UrbControlDescriptorRequest", urb_control_descriptor_request, 0x0, 0x40, true, 0x6e70f6b7360ed9d8)
#define _m13 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct wdf::urb_control_get_status_request_t), "_URB.UrbControlGetStatusRequest", urb_control_get_status_request, 0x0, 0x40, true, 0x6faccf6b932eab18)
#define _m14 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct wdf::urb_control_feature_request_t), "_URB.UrbControlFeatureRequest", urb_control_feature_request, 0x0, 0x40, true, 0xec87a8e611c03b92)
#define _m15 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct wdf::urb_control_vendor_or_class_request_t), "_URB.UrbControlVendorClassRequest", urb_control_vendor_class_request, 0x0, 0x40, true, 0x14742a6e4e01dd57)
#define _m16 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct wdf::urb_control_get_interface_request_t), "_URB.UrbControlGetInterfaceRequest", urb_control_get_interface_request, 0x0, 0x40, true, 0x4ff3b413ab6f02ab)
#define _m17 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct wdf::urb_control_get_configuration_request_t), "_URB.UrbControlGetConfigurationRequest", urb_control_get_configuration_request, 0x0, 0x40, true, 0x5db4984e8bd53ee7)
#define _m18 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct wdf::urb_os_feature_descriptor_request_t), "_URB.UrbOSFeatureDescriptorRequest", urb_os_feature_descriptor_request, 0x0, 0x40, true, 0x3a22a3e9fb5959ad)
#define _m19 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct wdf::urb_open_static_streams_t), "_URB.UrbOpenStaticStreams", urb_open_static_streams, 0x0, 0x80, true, 0xfddc3b6ee77ab12a)
#define _m20 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct wdf::urb_get_isoch_pipe_transfer_path_delays_t), "_URB.UrbGetIsochPipeTransferPathDelays", urb_get_isoch_pipe_transfer_path_delays, 0x0, 0x40, true, 0xc318590c1be638e5)
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
#endif