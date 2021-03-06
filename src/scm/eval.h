// predicates
static inline bool is_callable(scmval v) { return is_procedure(v) || is_parameter(v) || is_foreign_obj(v); }
// init
void init_eval(scmval);
// helpers
scmval call(scmval, scmval);
scmval eval(scmval, scmval);
