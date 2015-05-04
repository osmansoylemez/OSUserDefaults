#ifdef __OBJC__
    #import <Foundation/Foundation.h>
#endif
@interface OSUserDefaults: NSObject

+ (NSString *) iDecodeString:(NSString *)str;
+ (NSString *) iCodedStringWithDate:(NSString *)str;
+ (NSString *) getDate;
+ (NSString *) getDateNow;
+ (void) saveData:(NSString *)value withKey:(NSString *)key;
+ (NSString *) getDataWithKey:(NSString *)key;
+ (NSString *)base64Encode:(NSString *)plainText;
+ (NSString *)base64Decode:(NSString *)base64String;

@end
