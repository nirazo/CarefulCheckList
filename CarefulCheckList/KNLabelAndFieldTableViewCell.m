//
//  KNLabelAndFieldTableViewCell.m
//  CarefulCheckList
//
//  Created by Kenzo on 2014/04/10.
//  Copyright (c) 2014年 Kenzo. All rights reserved.
//

#import "KNLabelAndFieldTableViewCell.h"

@implementation KNLabelAndFieldTableViewCell
#define TEXT_LABEL_WIDTH 60
#define TEXT_LABEL_HEIGHT 44
#define TEXT_FIELD_WIDTH 250
#define TEXT_FIELD_HEIGHT 44

- (id)initWithStyle:(UITableViewCellStyle)style reuseIdentifier:(NSString *)reuseIdentifier
{
    self = [super initWithStyle:style reuseIdentifier:reuseIdentifier];
    if (self) {
        self.textField = [[UITextField alloc] initWithFrame:CGRectMake(0, 0, TEXT_FIELD_WIDTH, TEXT_FIELD_HEIGHT)];
        [self.contentView addSubview:self.textField];
        self.textField.enabled = YES;
    }
    return self;
}


- (void)setSelected:(BOOL)selected animated:(BOOL)animated
{
    [super setSelected:selected animated:animated];

    // Configure the view for the selected state
}

- (void)layoutSubviews {
    CGRect textLabelRect = CGRectMake(15, (self.frame.size.height-TEXT_LABEL_HEIGHT)/2, TEXT_LABEL_WIDTH, TEXT_LABEL_HEIGHT);
    self.textLabel.frame = textLabelRect;
    CGRect textFieldRect = CGRectMake(CGRectGetMaxX(self.textLabel.frame)+20, (self.frame.size.height-self.textField.frame.size.height)/2, self.textField.frame.size.width, self.textField.frame.size.height);
    self.textField.frame = textFieldRect;
}

@end
