/**
 * Copyright (C) 2013 kangliqiang ,kangliq@163.com
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#if!defined __MIXALL_H__
#define __MIXALL_H__

#include <string>

#include "AtomicValue.h"

/**
 * 各种方法大杂烩
 *
 */
class MixAll
{
public:
	static long MASTER_ID;
	static const std::string DEFAULT_TOPIC;
	static const std::string BENCHMARK_TOPIC;
	static const std::string DEFAULT_PRODUCER_GROUP;
	static const std::string DEFAULT_CONSUMER_GROUP;
	static const std::string TOOLS_CONSUMER_GROUP;
	static const std::string CLIENT_INNER_PRODUCER_GROUP;
	static const std::string SELF_TEST_TOPIC;
	// 为每个Consumer Group建立一个默认的Topic，前缀 + GroupName，用来保存处理失败需要重试的消息
	static const std::string RETRY_GROUP_TOPIC_PREFIX;
	// 为每个Consumer Group建立一个默认的Topic，前缀 + GroupName，用来保存重试多次都失败，接下来不再重试的消息
	static const std::string DLQ_GROUP_TOPIC_PREFIX;
	static const std::string NAMESRV_ADDR_ENV;
	static const std::string ROCKETMQ_HOME_ENV;
	static const std::string  ROCKETMQ_HOME_PROPERTY;
	static const std::string MESSAGE_COMPRESS_LEVEL;
	static std::string getRetryTopic(const std::string& consumerGroup);
	static bool compareAndIncreaseOnly(AtomicLong& target, long value);
};

#endif
