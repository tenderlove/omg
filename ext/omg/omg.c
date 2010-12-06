#include <ruby.h>

VALUE mOmg;

static VALUE call_raise(VALUE module)
{
  return rb_funcall(mOmg, rb_intern("raise_it"), 0);
}

void Init_omg()
{
    mOmg = rb_define_module("Omg");
    rb_define_singleton_method(mOmg, "call_raise", call_raise, 0);
}
