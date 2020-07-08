//
//  ViewController.swift
//  Calculator
//
//  Created by Vikrant Banerjee on 1/27/20.
//  Copyright © 2020 Vikrant Banerjee. All rights reserved.
//

import UIKit

class ViewController: UIViewController {
    
    @IBOutlet weak var mainLabel: UILabel!
    @IBOutlet weak var memoryLabel: UILabel!
    var oper:String = ""
    
    
    @IBAction func buttonPressed( sender: UIButton) {
        
        let buttonTag: Int = sender.tag
        
        
        if(buttonTag == 1){
            mainLabel.text = mainLabel.text! + (sender.titleLabel!.text ?? "")
        }
        
        if(buttonTag == 2){
            
            
            let number: Int32 = Int32(mainLabel.text ?? "0") ?? 0
            let oper: String = sender.titleLabel!.text ?? ""

            nextOperator(number, oper)
            
            let accumulatedText: String = String(cString: getAccumuatorText())
            let currentText = String(cString: getCurrentText())
            
            
            memoryLabel.text = String(accumulatedText)
            mainLabel.text = String(currentText)
            
        }
        if(buttonTag == 3){
            bracketOpen();
            
            let accumulatedText: String = String(cString: getAccumuatorText())
            let currentText = String(cString: getCurrentText())
            
            memoryLabel.text = String(accumulatedText)
            mainLabel.text = String(currentText)
        }
        if(buttonTag == 4){
            
            
            let number: Int32 = Int32(mainLabel.text ?? "0") ?? 0
            
            
            bracketClose(number)
            
            let accumulatedText: String = String(cString: getAccumuatorText())
            let currentText = String(cString: getCurrentText())
            
            memoryLabel.text = String(accumulatedText)
            mainLabel.text = String(currentText)
        }
        if(buttonTag == 5){
            
            answer()
            
            let accumulatedText: String = String(cString: getAccumuatorText())
            let currentText = String(cString: getCurrentText())
               
            memoryLabel.text = String(accumulatedText)
            mainLabel.text = String(currentText)
        }
        
        
        
        
        
        
        
    }

    
    override func viewDidLoad() {
        super.viewDidLoad()

        reset()
    }


}

