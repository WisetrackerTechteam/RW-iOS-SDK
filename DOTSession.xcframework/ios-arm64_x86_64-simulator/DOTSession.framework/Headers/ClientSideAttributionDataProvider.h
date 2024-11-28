#import <Foundation/Foundation.h>
@interface ClientSideAttributionDataProvider : NSObject {
}

/**
 * Attribution data client 제공을 위한 코드 추가. 2024.11.28
 **/
+ (ClientSideAttributionDataProvider *)sharedObject;
- (BOOL) checkDidUpdateAttributionData;
- (void) updateDidUpdateAttributionData:(BOOL)value;
- (NSDictionary *)getAttributedInfo;
- (void) saveAttributedInfo:(NSDictionary *)response;

@end
