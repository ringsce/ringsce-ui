package;

// imports
import php.Lib;
import openfl.display.Bitmap;
import openfl.display.Sprite;
import openfl.Assets;
import haxe.Timer;
import openfl.display.FPS;
import openfl.events.Event;
import openfl.system.System;
import openfl.text.TextField;
import openfl.text.TextFormat;



// Main function
class Main extends Sprite
{
	private var keys:Array;

	public function new() {
		Lib.println('Haxe is great!');

        super();

		var fps:FPS = new FPS(10, 100, 0xffffff);
		addChild(fps);

        
        var bitmap = new Bitmap(Assets.getBitmapData("assets/openfl.png"));
        addChild(bitmap);
		bitmap.alpha = 0;
        bitmap.scaleX = 0;
        bitmap.scaleY = 0;
        bitmap.smoothing = true;

        Actuate.tween(bitmap, 3, { alpha: 1 });
        Actuate.tween(bitmap, 6, { scaleX: 1, scaleY: 1 }).ease(Elastic.easeOut);
    }

	// keyboard functions

	private function onKeyDown(evt:KeyboardEvent):Void {

		trace("Char code: " + evt.charCode);
	
		trace("Key code: " + evt.keyCode);
	
	}

	private function onKeyDown(evt:KeyboardEvent):Void {

		keys[evt.keyCode] = true;
	
	}


	// onEnter function 
	private function onEnter(_)

		{	
	
			var now = Timer.stamp();
	
			times.push(now);
	
			
	
			while (times[0] < now - 1)
	
				times.shift();
	
				
	
			var mem:Float = Math.round(System.totalMemory / 1024 / 1024 * 100)/100;
	
			if (mem > memPeak) memPeak = mem;
	
			
	
			if (visible)
	
			{	
	
				text = "FPS: " + times.length + "\nMEM: " + mem + " MB\nMEM peak: " + memPeak + " MB";	
	
			}
	
		}
	
	
	
	private function onKeyUp(evt:KeyboardEvent):Void {
	
		keys[evt.keyCode] = false;
	
	}
	
	
}
