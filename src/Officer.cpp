#include <nan.h>
#include <boost/dll.hpp>
#include <sstream>

using v8::FunctionTemplate;
using v8::Handle;
using v8::Object;
using v8::String;

NAN_METHOD(Fibo) {
    // Write the results to a string stream:
    std::stringstream ss;

    ss << "Hi";

    // Return it to node engine
    info.GetReturnValue().Set(Nan::New<String>(ss.str().c_str()).ToLocalChecked());
}

void InitAll(Handle<Object> exports) {
  // Method that returns the generated Fibonacci sequence as a string:
  exports->Set(Nan::New<String>("fibo").ToLocalChecked(),
    Nan::New<FunctionTemplate>(Fibo)->GetFunction());
}

NODE_MODULE(Officer, InitAll)