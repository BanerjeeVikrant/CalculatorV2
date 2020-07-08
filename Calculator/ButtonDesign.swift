//
//  ButtonDesign.swift
//  Calculator
//
//  Created by Vikrant Banerjee on 1/27/20.
//  Copyright © 2020 Vikrant Banerjee. All rights reserved.
//

import UIKit

class ButtonDesign: UIButton {
    
    required public init?(coder aDecoder: NSCoder) {

        super.init(coder: aDecoder)
        self.layer.cornerRadius = self.bounds.size.height/2

    }

  
}

