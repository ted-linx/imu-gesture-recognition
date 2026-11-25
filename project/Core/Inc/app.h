#ifndef __APP_H
#define __APP_H

typedef enum {
    INIT,
    IDLE,
    WRITING
} AppState;

typedef struct {
    AppState state;
} AppContext;

void app_init(AppContext *app);

void app_idle(AppContext *app);

void app_writing(AppContext *app);

#endif