package App;

import javafx.collections.FXCollections;
import javafx.collections.ObservableList;

import javafx.event.ActionEvent;

import javafx.fxml.FXML;

import javafx.scene.control.*;
import javafx.scene.control.cell.PropertyValueFactory;

public class Controller {
    private ObservableList<Call> CallInfo = FXCollections.observableArrayList();

    @FXML
    private TableView<Call> table = new TableView<>(CallInfo);

    @FXML
    private TableColumn<Call,Integer> IdColumn;

    @FXML
    private TableColumn<Call, Integer> DurColumn;

    @FXML
    private TableColumn<Call,String> TimeColumn;

    @FXML
    private TableColumn<Call,String> FromColumn;

    @FXML
    private TableColumn<Call,String> ToColumn;

    @FXML
    private TableColumn<Call,String> DateColumn;

    @FXML
    private Button btnAdd;

    @FXML
    private Button btnDel;

    @FXML
    private TextField fromField;

    @FXML
    private TextField toField;

    @FXML
    private TextField timeField;

    @FXML
    private TextField dateField;

    @FXML
    private TextField durField;

    public void initialize(){
        initData();

        DurColumn.setCellValueFactory(new PropertyValueFactory<>("dur"));
        IdColumn.setCellValueFactory(new PropertyValueFactory<>("id"));
        TimeColumn.setCellValueFactory(new PropertyValueFactory<>("time"));
        FromColumn.setCellValueFactory(new PropertyValueFactory<>("from"));
        ToColumn.setCellValueFactory(new PropertyValueFactory<>("to"));
        DateColumn.setCellValueFactory(new PropertyValueFactory<>("date"));

        table.setItems(CallInfo);

    }

    private void initData() {
        CallInfo.add(new Call(1, "25", "13:02", "Петя", "Вася", "5.08.18"));
        CallInfo.add(new Call(2, "25", "13:02", "Вася", "Петя", "5.08.18"));
        CallInfo.add(new Call(3, "30", "15:27", "Инна", "Жанна", "27.06.18"));
        CallInfo.add(new Call(4, "40", "16:20", "Гриша", "Коля", "30.02.18"));
        CallInfo.add(new Call(5, "10", "17:28", "Соня", "Вика", "25.05.18"));
    }

    public void handle(ActionEvent actionEvent) {
        if(actionEvent.getSource() == btnAdd) {
            CallInfo.add(new Call(CallInfo.size() + 1, durField.getText(),
                    timeField.getText(), fromField.getText(), toField.getText(), dateField.getText()));
            durField.clear();
            timeField.clear();
            fromField.clear();
            toField.clear();
            dateField.clear();
        }

        if(actionEvent.getSource() == btnDel) {
            ObservableList<Call> callSelected;
            callSelected = table.getSelectionModel().getSelectedItems();

            callSelected.forEach(CallInfo::remove);
        }
    }
}
