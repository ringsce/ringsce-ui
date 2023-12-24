package;

// imports
import openfl.display.Bitmap;
import openfl.display.Sprite;
import openfl.Assets;

// Main function
class Main extends Sprite
{
	public function new() {
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
}
