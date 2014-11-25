#ifndef NUMBA_DISPATCHER_H_
#define NUMBA_DISPATCHER_H_

#ifdef __cplusplus
    extern "C" {
#endif

typedef struct _opaque_dispatcher dispatcher_t;

dispatcher_t *
dispatcher_new(void *tm, int argct);

void
dispatcher_del(dispatcher_t *obj);

void
dispatcher_add_defn(dispatcher_t *obj, int tys[], void* callable);

void*
dispatcher_resolve(dispatcher_t *obj, int sig[], int *matches,
                   int allow_unsafe);

int
dispatcher_count(dispatcher_t *obj);

int dispatcher_get_ndarray_typecode(int ndim, int layout, int type_num);

void dispatcher_insert_ndarray_typecode(int ndim, int layout, int type_num,
                                        int typecode);

#ifdef __cplusplus
    }
#endif

#endif  /* NUMBA_DISPATCHER_H_ */