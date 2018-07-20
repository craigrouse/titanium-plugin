/**
 * Appcelerator Titanium Mobile
 * Copyright (c) 2011-2016 by Appcelerator, Inc. All Rights Reserved.
 * Licensed under the terms of the Apache Public License
 * Please see the LICENSE included with this distribution for details.
 */

/** This is generated, do not edit by hand. **/

#include <jni.h>

#include "Proxy.h"

namespace com {
namespace tealium {
namespace titaniumandroid {

class TealiumTitaniumAndroidModule : public titanium::Proxy
{
public:
	explicit TealiumTitaniumAndroidModule();

	static void bindProxy(v8::Local<v8::Object>, v8::Local<v8::Context>);
	static v8::Local<v8::FunctionTemplate> getProxyTemplate(v8::Isolate*);
	static void dispose(v8::Isolate*);

	static jclass javaClass;

private:
	static v8::Persistent<v8::FunctionTemplate> proxyTemplate;

	// Methods -----------------------------------------------------------
	static void initTealium(const v8::FunctionCallbackInfo<v8::Value>&);
	static void trackView(const v8::FunctionCallbackInfo<v8::Value>&);
	static void setVolatile(const v8::FunctionCallbackInfo<v8::Value>&);
	static void getDataType(const v8::FunctionCallbackInfo<v8::Value>&);
	static void setPersistent(const v8::FunctionCallbackInfo<v8::Value>&);
	static void trackEvent(const v8::FunctionCallbackInfo<v8::Value>&);
	static void printDataType(const v8::FunctionCallbackInfo<v8::Value>&);
	static void example(const v8::FunctionCallbackInfo<v8::Value>&);

	// Dynamic property accessors ----------------------------------------
	static void getter_exampleProp(v8::Local<v8::Name> name, const v8::PropertyCallbackInfo<v8::Value>& info);
	static void setter_exampleProp(v8::Local<v8::Name> name, v8::Local<v8::Value> value, const v8::PropertyCallbackInfo<void>& info);

};

} // titaniumandroid
} // tealium
} // com
