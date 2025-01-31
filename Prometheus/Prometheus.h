//
//  Prometheus.h
//  Prometheus
//
//  Copyright (c) 2015 Comyar Zaheri. All rights reserved.
//
//  Permission is hereby granted, free of charge, to any person obtaining a copy
//  of this software and associated documentation files (the "Software"), to
//  deal in the Software without restriction, including without limitation the
//  rights to use, copy, modify, merge, publish, distribute, sublicense, and/or
//  sell copies of the Software, and to permit persons to whom the Software is
//  furnished to do so, subject to the following conditions:
//
//  The above copyright notice and this permission notice shall be included in
//  all copies or substantial portions of the Software.
//
//  THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
//  IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
//  FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
//  AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
//  LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING
//  FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS
//  IN THE SOFTWARE.
//


#pragma mark - Imports

@import Foundation;


#pragma mark - Framework

// Project version number for Prometheus.
FOUNDATION_EXPORT double PrometheusVersionNumber;

// Project version string for Prometheus.
FOUNDATION_EXPORT const unsigned char PrometheusVersionString[];

// Classes
#import <Prometheus/PROCache.h>
#import <Prometheus/PRODiskCache.h>
#import <Prometheus/PROCachedData.h>
#import <Prometheus/PROMemoryCache.h>

// Protocols
#import <Prometheus/PROCaching.h>
#import <Prometheus/PRODiskCaching.h>
#import <Prometheus/PROMemoryCaching.h>
#import <Prometheus/PROCacheDelegate.h>
#import <Prometheus/PRODiskCacheDelegate.h>
#import <Prometheus/PROMemoryCacheDelegate.h>



