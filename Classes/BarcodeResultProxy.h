//
//  BarcodeResultProxy.h
//  redlaser
//
//  Created by Zsombor Papp on 11/1/12.
//
//

#import "TiProxy.h"

#import "RedLaserSDK.h"

@interface BarcodeResultProxy : TiProxy {
    
}

@property (readonly) BarcodeResult *barcodeResult;

@property (readonly) NSNumber *barcodeType;
@property (readonly) NSString *barcodeTypeString;
@property (readonly) NSString *barcodeString;
@property (readonly) NSString *extendedBarcodeString;
@property (readonly) BarcodeResultProxy *associatedBarcode;

@property (readonly, retain) NSDate *firstScanTime;
@property (readonly, retain) NSDate *mostRecentScanTime;
@property (readonly, retain) NSArray *barcodeLocation;

+(BarcodeResultProxy*)withBarcodeResult:(BarcodeResult*)theBarcodeResult;
-(BarcodeResultProxy*)initWithBarcodeResult:(BarcodeResult*)theBarcodeResult;
-(NSNumber*)equals:(id)otherBarcodeProxy;

@end
