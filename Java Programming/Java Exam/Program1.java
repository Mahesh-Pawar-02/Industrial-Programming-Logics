import javax.swing.*;
import java.awt.*;
import java.awt.event.*;

public class Program1 {
    public static void main(String[] args) {
        // Create a JFrame
        JFrame frame = new JFrame("Change Table Background Color");
        frame.setSize(400, 300);
        frame.setLayout(new BorderLayout());
        
        String[][] data = {
            {"1", "Alice", "20"},
            {"2", "Bob", "22"},
            {"3", "Charlie", "23"}
        };
        String[] columns = {"ID", "Name", "Age"};

        // Create a JTable
        JTable table = new JTable(data, columns);
        table.setRowHeight(25);

        // Add the table to a JScrollPane
        JScrollPane scrollPane = new JScrollPane(table);

        // Create a Button
        JButton btn = new JButton("Change Color to RED");

        // Add ActionListener to the Button
        btn.addActionListener(new ActionListener() {
            public void actionPerformed(ActionEvent e) {
                table.setBackground(Color.RED);
            }
        });

        // Add components to the frame
        frame.add(scrollPane, BorderLayout.CENTER);
        frame.add(btn, BorderLayout.SOUTH);

        // Make the frame visible
        frame.setVisible(true);
    }
}
