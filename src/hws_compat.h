/* hws_compat.h */

#include <linux/version.h>
#include <media/v4l2-fh.h>

/* v4l2 fh compat */
#if LINUX_VERSION_CODE >= KERNEL_VERSION(6,18,0)
#define HWS_V4L2_FH_ADD(fh, file) v4l2_fh_add((fh), (file))
#define HWS_V4L2_FH_DEL(fh, file) v4l2_fh_del((fh), (file))
#else
#define HWS_V4L2_FH_ADD(fh, file) v4l2_fh_add((fh))
#define HWS_V4L2_FH_DEL(fh, file) v4l2_fh_del((fh))
#endif
