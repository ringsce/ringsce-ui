package;

// imports
import php.Lib;
import openfl.display.Bitmap;
import openfl.display.Sprite;
import openfl.Assets;

// Main function
class Main extends Sprite
{
	private var keys:Array;

	public function new() {
		Lib.println('Haxe is great!');

        super();
        
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
	
	
	
	private function onKeyUp(evt:KeyboardEvent):Void {
	
		keys[evt.keyCode] = false;
	
	}
	
	
}
