import org.opencv.core.*;
import org.opencv.imgcodecs.Imgcodecs;
import org.opencv.imgproc.Imgproc;

import javax.swing.*;
import java.awt.*;

public class ColorDetectionWithOutput {

    public static void main(String[] args) {
        // Load OpenCV library
        System.loadLibrary(Core.NATIVE_LIBRARY_NAME);

        // Path to your image file
        String imagePath = "path/to/your/image.jpg";

        // Read the image
        Mat image = Imgcodecs.imread(imagePath);

        // Convert BGR to HSV
        Mat hsvImage = new Mat();
        Imgproc.cvtColor(image, hsvImage, Imgproc.COLOR_BGR2HSV);

        // Define range of blue color in HSV
        Scalar lowerBlue = new Scalar(100, 100, 100); // Adjust these values as needed
        Scalar upperBlue = new Scalar(130, 255, 255); // Adjust these values as needed

        // Threshold the HSV image to get only blue colors
        Mat mask = new Mat();
        Core.inRange(hsvImage, lowerBlue, upperBlue, mask);

        // Apply the mask to the original image
        Mat detectedImage = new Mat();
        Core.bitwise_and(image, image, detectedImage, mask);

        // Convert Mat to BufferedImage for display
        Image originalImg = matToBufferedImage(image);
        Image detectedImg = matToBufferedImage(detectedImage);

        // Display original image and detected blue regions in a JFrame
        displayImages(originalImg, detectedImg);
    }

    // Helper method to convert OpenCV Mat to BufferedImage
    private static Image matToBufferedImage(Mat matrix) {
        int cols = matrix.cols();
        int rows = matrix.rows();
        int elemSize = (int) matrix.elemSize();
        byte[] data = new byte[cols * rows * elemSize];
        int type;
        matrix.get(0, 0, data);

        switch (matrix.channels()) {
            case 1:
                type = BufferedImage.TYPE_BYTE_GRAY;
                break;
            case 3:
                type = BufferedImage.TYPE_3BYTE_BGR;
                // bgr to rgb
                byte b;
                for (int i = 0; i < data.length; i = i + 3) {
                    b = data[i];
                    data[i] = data[i + 2];
                    data[i + 2] = b;
                }
                break;
            default:
                return null;
        }

        BufferedImage image2 = new BufferedImage(cols, rows, type);
        image2.getRaster().setDataElements(0, 0, cols, rows, data);
        return image2;
    }

    // Helper method to display images in a JFrame
    private static void displayImages(Image originalImg, Image detectedImg) {
        JFrame frame = new JFrame();
        frame.setLayout(new GridLayout(1, 2));

        // Display original image
        JLabel label1 = new JLabel(new ImageIcon(originalImg));
        frame.add(label1);

        // Display detected blue regions image
        JLabel label2 = new JLabel(new ImageIcon(detectedImg));
        frame.add(label2);

        // Configure JFrame
        frame.setTitle("Color Detection Example");
        frame.setSize(originalImg.getWidth(null) * 2, originalImg.getHeight(null));
        frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        frame.setVisible(true);
    }
}

