//
//  NSDate+Extension.h
//  Listener
//
//  Created by yellow on 2019/4/18.
//  Copyright © 2019 yellow. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface NSDate (Extension)

- (NSString*)stringByFormatter:(NSString*)formatter;
- (NSString*)stringByFormatter:(NSString*)formatter timeZone:(NSTimeZone *)timeZone;

@end

NS_ASSUME_NONNULL_END
