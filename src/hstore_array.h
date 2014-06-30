#ifndef PG_NUMHSTORE_HSTORE_ARRAY
#define PG_NUMHSTORE_HSTORE_ARRAY

#include "pg_numhstore.h"

Datum array_to_hstore(Datum *data, int count, bool *nulls);

extern void adeven_add_read_pair( HEntry * entries, char * base, int index, char ** key, long * vali, size_t * keylen );

PG_FUNCTION_INFO_V1( hstore_array );
PG_FUNCTION_INFO_V1( hstore_array_finalfn );

Datum hstore_array( PG_FUNCTION_ARGS );
Datum hstore_array_finalfn( PG_FUNCTION_ARGS );

#endif //PG_NUMHSTORE_HSTORE_ARRAY
