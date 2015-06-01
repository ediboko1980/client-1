//
//  KBProveInputView.h
//  Keybase
//
//  Created by Gabriel on 2/9/15.
//  Copyright (c) 2015 Gabriel Handford. All rights reserved.
//

#import <Foundation/Foundation.h>

#import "KBAppDefines.h"
#import "KBRPC.h"

@interface KBProveInputView : YOView
@property (nonatomic) KBRProofType proofType;
@property KBTextField *inputField;
@property KBButton *button;
@property KBButton *cancelButton;
@end
