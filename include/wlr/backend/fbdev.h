/*
 * This an unstable interface of wlroots. No guarantees are made regarding the
 * future consistency of this API.
 */
#ifndef WLR_USE_UNSTABLE
#error "Add -DWLR_USE_UNSTABLE to enable unstable wlroots features"
#endif

#ifndef WLR_BACKEND_FBDEV_H
#define WLR_BACKEND_FBDEV_H

#include <wlr/backend.h>
#include <wlr/types/wlr_input_device.h>
#include <wlr/types/wlr_output.h>

struct wlr_backend *wlr_fbdev_backend_create(struct wl_display *display,
	struct wlr_session *session, struct wlr_device *dev, struct wlr_backend *parent);

struct wlr_output *wlr_fbdev_add_output(struct wlr_backend *backend,
	unsigned int width, unsigned int height);

bool wlr_backend_is_fbdev(struct wlr_backend *backend);
bool wlr_output_is_fbdev(struct wlr_output *output);

#endif
