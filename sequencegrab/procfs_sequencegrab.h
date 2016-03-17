#ifndef _PROCFS_SEQUENCEGRAB_H_
#define _PROCFS_SEQUENCEGRAB_H_

#include <CoreFoundation/CoreFoundation.h>

#define CAMERA_TRIGGER_THRESHOLD 4
#define CAMERA_ACTIVE_DURATION   1

static int   PROCFS_GetTIFFFromCamera(CFMutableDataRef *data);
static off_t PROCFS_GetTIFFSizeFromCamera(void);

static
off_t
PROCFS_GetTIFFSizeFromCamera(void)
{
    return (off_t)((off_t)(640 * 480 * 4) + (off_t)8192);
}

static
int
PROCFS_GetTIFFFromCamera(CFMutableDataRef *data)
{
    return 0;
}

#endif /* _PROCFS_SEQUENCEGRAB_H_ */
