/* SPDX-License-Identifier: GPL-2.0 */
#ifndef _LINUX_FANOTIFY_H
#define _LINUX_FANOTIFY_H

#include <uapi/linux/fanotify.h>

#define FAN_GROUP_FLAG(group, flag) \
	((group)->fanotify_data.flags & (flag))

/*
 * Flags allowed to be passed from/to userspace.
 *
 * We intentionally do not add new bits to the old FAN_ALL_* constants, because
 * they are uapi exposed constants. If there are programs out there using
 * these constant, the programs may break if re-compiled with new uapi headers
 * and then run on an old kernel.
 */
#define FANOTIFY_CLASS_BITS	(FAN_CLASS_NOTIF | FAN_CLASS_CONTENT | \
				 FAN_CLASS_PRE_CONTENT)

#define FANOTIFY_INIT_FLAGS	(FANOTIFY_CLASS_BITS | \
				 FAN_REPORT_TID | \
				 FAN_CLOEXEC | FAN_NONBLOCK | \
				 FAN_UNLIMITED_QUEUE | FAN_UNLIMITED_MARKS)

#define FANOTIFY_MARK_TYPE_BITS	(FAN_MARK_INODE | FAN_MARK_MOUNT)

#define FANOTIFY_MARK_FLAGS	(FANOTIFY_MARK_TYPE_BITS | \
				 FAN_MARK_ADD | \
				 FAN_MARK_REMOVE | \
				 FAN_MARK_DONT_FOLLOW | \
				 FAN_MARK_ONLYDIR | \
				 FAN_MARK_IGNORED_MASK | \
				 FAN_MARK_IGNORED_SURV_MODIFY | \
				 FAN_MARK_FLUSH)

/* Events that user can request to be notified on */
#define FANOTIFY_EVENTS		(FAN_ACCESS | FAN_MODIFY | \
				 FAN_CLOSE | FAN_OPEN | FAN_OPEN_EXEC)

/* Events that require a permission response from user */
#define FANOTIFY_PERM_EVENTS	(FAN_OPEN_PERM | FAN_ACCESS_PERM | \
				 FAN_OPEN_EXEC_PERM)

/* Extra flags that may be reported with event or control handling of events */
#define FANOTIFY_EVENT_FLAGS	(FAN_EVENT_ON_CHILD | FAN_ONDIR)

/* Events that may be reported to user */
#define FANOTIFY_OUTGOING_EVENTS	(FANOTIFY_EVENTS | \
					 FANOTIFY_PERM_EVENTS | \
					 FAN_Q_OVERFLOW)

#define ALL_FANOTIFY_EVENT_BITS		(FANOTIFY_OUTGOING_EVENTS | \
					 FANOTIFY_EVENT_FLAGS)

/* Do not use these old uapi constants internally */
#undef FAN_ALL_CLASS_BITS
#undef FAN_ALL_INIT_FLAGS
#undef FAN_ALL_MARK_FLAGS
#undef FAN_ALL_EVENTS
#undef FAN_ALL_PERM_EVENTS
#undef FAN_ALL_OUTGOING_EVENTS

#endif /* _LINUX_FANOTIFY_H */
