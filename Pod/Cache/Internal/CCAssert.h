/**
 *   CCAssert.h
 *
 *   Copyright 2015 The Climate Corporation
 *   Copyright 2015 Tony Stone
 *
 *   Licensed under the Apache License, Version 2.0 (the "License");
 *   you may not use this file except in compliance with the License.
 *   You may obtain a copy of the License at
 *
 *   http://www.apache.org/licenses/LICENSE-2.0
 *
 *   Unless required by applicable law or agreed to in writing, software
 *   distributed under the License is distributed on an "AS IS" BASIS,
 *   WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 *   See the License for the specific language governing permissions and
 *   limitations under the License.
 *
 *   Created by Tony Stone on 4/30/15.
 */
#ifndef CC_ASSERT_H
#define CC_ASSERT_H

#define AssertIsMainThread()  NSAssert([NSThread isMainThread], @"%@ must be executed on the main thread", NSStringFromSelector(_cmd))
#define AssertIsNotMainThreadIfCondition(condition)  NSAssert(((condition) ? ![NSThread isMainThread] : true), @"%@ can not be executed on the thread when %s is true.", NSStringFromSelector(_cmd), #condition)

#endif // CC_ASSERT_H