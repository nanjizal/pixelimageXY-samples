package pixelimage_samples.pixelimage_format;

import pixelimage.Pixelimage;
import pixelimage.Pixelshape;

import pixelimage.triangleGML.*;
import pixelimage.triangleGML.pattern.*;
import pixelimage.triangleGML.coreShape.TriangleGML;
import pixelimage.algo.GeomPix;

import pixelimage.formats.Format;

function main() new Grid();
class Grid {

    // main pixelimage instance
    var pixelImage: Pixelshape;

    public function new(){
        begin();
        var pixelShape = pixelImage;
        // see xml definitions below
        pixelImage.simpleRect( 0, 0, pixelImage.width, pixelImage.height, 0xFF000000 );
        TriangleGML.withString( pixelImage, lineGridShape );
        TriangleGML.withString( pixelShape, arcPie, 10, 0 );
        TriangleGML.withString( pixelShape, arcEllipse, 10, 500 );
        TriangleGML.withString( pixelShape, arcChord, 10, 1000 );
        TriangleGML.withString( pixelShape, arcPie2, 1210, 0 );
        TriangleGML.withString( pixelShape, arcEllipse2, 1210, 500 );
        TriangleGML.withString( pixelShape, arcChord2, 1210, 1000 );
        TriangleGML.withString( pixelImage, ellipseTest );
        TriangleGML.withString( pixelImage, circleTest );
        TriangleGML.withString( pixelImage, softEllipseTest );
        TriangleGML.withString( pixelImage, quadShape );
        var trigml = TriangleGML.withString( pixelImage, quadShapeSoft, 340, 5 );
        TriangleGML.withString( pixelImage, quadShapeLuxury, 340, 500 ); 
        TriangleGML.withString( pixelImage, vePathElementShape );
        end();

    }

    function begin(){
        pixelImage = new Pixelshape( 1024*4, 768*4 );
        pixelImage.transparent = true;
    }

    function end(){
        toPNG( pixelImage, 'gridTest' );
    }

    var lineGridShape = 
                    '<LineGridShape
                        left = "100"  top = "100"
                        width = "2048" height = "1536"
                        delta = "100" deltaH = "100"
                        strokeColor="0xfF003300" strokeWidth="3">
                    </LineGridShape>';

    var ellipseTest =  
                    '<EllipseShape 
                        top="100" 
                        width="200" 
                        height="50" 
                        strokeColor="0xFF0000" strokeWidth="1" 
                        fill="0xFF00FF00">
                    </EllipseShape>';
    var circleTest: String = 
                    '<CircleShape 
                        left="200" top="200" 
                        diameter="300" 
                        strokeColor="0xFFFF0000" strokeWidth="10" 
                        fill="0xFF00FF00">
                    </CircleShape>';
    var softEllipseTest: String = 
                    '<SoftEllipseShape 
                        left="500" top="500" 
                        width="400" 
                        height="400" 
                        strokeColor="0xFFFF0000"
                        softC="10">
                    </SoftEllipseShape>';
                    var arcPie = 
                    '<ArcShape 
                        left="100"  top="100" 
                        width="500" height="480" 
                        strokeColor="0xFFFF0000" strokeWidth="12" 
                        fill="0xFF00FF00" 
                        startAngle="0" sweepAngle="240"
                        arcType="pie">
                    </ArcShape>';
                
                    var arcEllipse =
                    '<ArcShape 
                        left="100"  top="100" 
                        width="500" height="480" 
                        strokeColor="0xFF0000FF" strokeWidth="12" 
                        fill="0xFFFF00EE" 
                        startAngle="0" sweepAngle="240"
                        arcType="ellipse">
                    </ArcShape>';
                
                    var arcChord =
                    '<ArcShape 
                        left="100"  top="100" 
                        width="500" height="480" 
                        strokeColor="0xFFFF7700" strokeWidth="12" 
                        fill="0xFF00A6FF" 
                        startAngle="0" sweepAngle="240"
                        arcType="chord">
                    </ArcShape>';
                
                    var arcPie2 = 
                    '<ArcShape 
                        left="100"  top="100" 
                        width="500" height="480" 
                        strokeColor="0xFFFF0000" strokeWidth="12" 
                        fill="0xFF00FF00" 
                        startAngle="120" sweepAngle="70"
                        arcType="pie">
                    </ArcShape>';
                
                    var arcEllipse2 =
                    '<ArcShape 
                        left="100"  top="100" 
                        width="500" height="480" 
                        strokeColor="0xFF0000FF" strokeWidth="12" 
                        fill="0xFFFF00EE" 
                        startAngle="-43" sweepAngle="108"
                        arcType="ellipse">
                    </ArcShape>';
                
                    var arcChord2 =
                    '<ArcShape 
                        left="100"  top="100" 
                        width="500" height="480" 
                        strokeColor="0xFFFF7700" strokeWidth="12" 
                        fill="0xFF00A6FF" 
                        startAngle="190" sweepAngle="90"
                        arcType="chord">
                    </ArcShape>';
                    var quadShapeSoft = 
                    '<QuadShape 
                    aX="500" aY="300" 
                    bX="530" bY="220"
                    cX="700" cY="120"
                    dX="900" dY="500" 
                    soft="90"
                    strokeColor="0xFFFF0000" strokeWidth="1"> 
                    </QuadShape>';
                    var quadShape = '<QuadShape 
                    aX="500" aY="300" 
                    bX="530" bY="220"
                    cX="700" cY="120"
                    dX="900" dY="500" 
                    strokeColor="0xFFFF0000" strokeWidth="1">
                    </QuadShape>';
                    var quadShapeLuxury = 
                    '<QuadShape 
                    aX="500" aY="300" 
                    bX="530" bY="220"
                    cX="700" cY="120"
                    dX="900" dY="500" 
                    soft="90"
                    luxury="true"
                    strokeColor="0xFFFF0000" strokeWidth="1"> 
                    </QuadShape>';
    //var quadtest_d      = 'M200,300 Q400,50 600,300 T1000,300';
//var shape_d      = 'M200,300 Q400,50 600,300 T1000,300,L50,50 L20,20 L100,200 C100,100 250,100 250,200S400,300 400,200';
//var cubictest_d     = 'M100,200 C100,100 250,100 250,200S400,300 400,200';                
                    var vePathElementShape =  '<VePathElementShape
                        pathData="M200,300 Q400,50 600,300 T1000,300,L50,50 L20,20 L100,200 C100,100 250,100 250,200S400,300 400,200" 
                        translateX="0"
                        translateY="0"
                        strokeWidths="[ 10, 20, 30, 40, 50, 60, 70 ]" 
                        strokeColors="[ 0xFF9400D3, 0xFF4b0082, 0xFF0000FF, 0xFF00ff00, 0xFFFFFF00, 0xFFFF7F00, 0xFFFF0000 ]" 
                        fill="0xff0000ff">
                    </VePathElementShape>';                
}